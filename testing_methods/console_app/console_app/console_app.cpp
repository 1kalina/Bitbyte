#include <QApplication>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFileDialog>

class Notepad : public QWidget {
public:
    Notepad(QWidget* parent = nullptr) : QWidget(parent) {
        textEdit = new QTextEdit(this);
        QVBoxLayout* layout = new QVBoxLayout;
        layout->addWidget(textEdit);
        setLayout(layout);

        createActions();
        createMenu();

        setWindowTitle("Notepad");
        resize(500, 400);
    }

private:
    void createActions() {
        newAction = new QAction("&New", this);
        newAction->setShortcut(QKeySequence::New);
        connect(newAction, &QAction::triggered, this, &Notepad::newFile);

        openAction = new QAction("&Open", this);
        openAction->setShortcut(QKeySequence::Open);
        connect(openAction, &QAction::triggered, this, &Notepad::openFile);

        saveAction = new QAction("&Save", this);
        saveAction->setShortcut(QKeySequence::Save);
        connect(saveAction, &QAction::triggered, this, &Notepad::saveFile);

        exitAction = new QAction("&Exit", this);
        exitAction->setShortcut(QKeySequence::Quit);
        connect(exitAction, &QAction::triggered, qApp, &QApplication::quit);
    }

    void createMenu() {
        menuBar = new QMenuBar(this);
        fileMenu = new QMenu("&File", this);
        fileMenu->addAction(newAction);
        fileMenu->addAction(openAction);
        fileMenu->addAction(saveAction);
        fileMenu->addAction(exitAction);
        menuBar->addMenu(fileMenu);
    }

    void newFile() {
        textEdit->clear();
    }

    void openFile() {
        QString fileName = QFileDialog::getOpenFileName(this, "Open File");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QFile::ReadOnly | QFile::Text)) {
                QTextStream in(&file);
                textEdit->setPlainText(in.readAll());
                file.close();
            }
        }
    }

    void saveFile() {
        QString fileName = QFileDialog::getSaveFileName(this, "Save File");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QFile::WriteOnly | QFile::Text)) {
                QTextStream out(&file);
                out << textEdit->toPlainText();
                file.close();
            }
        }
    }

    QTextEdit* textEdit;
    QMenuBar* menuBar;
    QMenu* fileMenu;
    QAction* newAction;
    QAction* openAction;
    QAction* saveAction;
    QAction* exitAction;
};

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    Notepad notepad;
    notepad.show();

    return app.exec();
}
