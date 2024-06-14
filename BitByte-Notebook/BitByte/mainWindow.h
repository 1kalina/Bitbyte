#pragma once
#include "about.h"

#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace BitByte {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for mainWindow
	/// </summary>
	public ref class mainWindow : public System::Windows::Forms::Form
	{
	public:
		mainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: String^ filePath = nullptr;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;



	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;


	private: String^ fileName;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private:

	private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundColorToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainWindow::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWindow::newToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainWindow::saveToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainWindow::openToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->formatToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			resources->ApplyResources(this->newToolStripMenuItem, L"newToolStripMenuItem");
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			resources->ApplyResources(this->saveToolStripMenuItem, L"saveToolStripMenuItem");
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			resources->ApplyResources(this->openToolStripMenuItem, L"openToolStripMenuItem");
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::openToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cutToolStripMenuItem,
					this->copyToolStripMenuItem, this->pasteToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			resources->ApplyResources(this->editToolStripMenuItem, L"editToolStripMenuItem");
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			resources->ApplyResources(this->cutToolStripMenuItem, L"cutToolStripMenuItem");
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			resources->ApplyResources(this->copyToolStripMenuItem, L"copyToolStripMenuItem");
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			resources->ApplyResources(this->pasteToolStripMenuItem, L"pasteToolStripMenuItem");
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::pasteToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fontToolStripMenuItem,
					this->fontColorToolStripMenuItem, this->backgroundColorToolStripMenuItem, this->toolStripSeparator1, this->resetToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			resources->ApplyResources(this->formatToolStripMenuItem, L"formatToolStripMenuItem");
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			resources->ApplyResources(this->fontToolStripMenuItem, L"fontToolStripMenuItem");
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::fontToolStripMenuItem_Click);
			// 
			// fontColorToolStripMenuItem
			// 
			this->fontColorToolStripMenuItem->Name = L"fontColorToolStripMenuItem";
			resources->ApplyResources(this->fontColorToolStripMenuItem, L"fontColorToolStripMenuItem");
			this->fontColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::fontColorToolStripMenuItem_Click);
			// 
			// backgroundColorToolStripMenuItem
			// 
			this->backgroundColorToolStripMenuItem->Name = L"backgroundColorToolStripMenuItem";
			resources->ApplyResources(this->backgroundColorToolStripMenuItem, L"backgroundColorToolStripMenuItem");
			this->backgroundColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::backgroundColorToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			resources->ApplyResources(this->resetToolStripMenuItem, L"resetToolStripMenuItem");
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::resetToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			resources->ApplyResources(this->openFileDialog1, L"openFileDialog1");
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainWindow::pasteToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Name = L"richTextBox1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->toolStripSeparator2, this->cutToolStripMenuItem1, this->copyToolStripMenuItem1, this->pasteToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			resources->ApplyResources(this->contextMenuStrip1, L"contextMenuStrip1");
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainWindow::resetToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			resources->ApplyResources(this->cutToolStripMenuItem1, L"cutToolStripMenuItem1");
			this->cutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainWindow::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem1
			// 
			this->copyToolStripMenuItem1->Name = L"copyToolStripMenuItem1";
			resources->ApplyResources(this->copyToolStripMenuItem1, L"copyToolStripMenuItem1");
			this->copyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainWindow::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem1
			// 
			this->pasteToolStripMenuItem1->Name = L"pasteToolStripMenuItem1";
			resources->ApplyResources(this->pasteToolStripMenuItem1, L"pasteToolStripMenuItem1");
			this->pasteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainWindow::pasteToolStripMenuItem_Click);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fontDialog1->ShowColor = true;
			// 
			// colorDialog1
			// 
			this->colorDialog1->AnyColor = true;
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripTextBox1,
					this->toolStripSeparator3, this->aboutToolStripMenuItem
			});
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			resources->ApplyResources(this->infoToolStripMenuItem, L"infoToolStripMenuItem");
			// 
			// toolStripTextBox1
			// 
			resources->ApplyResources(this->toolStripTextBox1, L"toolStripTextBox1");
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &mainWindow::toolStripTextBox1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			resources->ApplyResources(this->toolStripSeparator3, L"toolStripSeparator3");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWindow::aboutToolStripMenuItem_Click);
			// 
			// mainWindow
			// 
			this->AllowDrop = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"mainWindow";
			this->Load += gcnew System::EventHandler(this, &mainWindow::mainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// menuButtom New
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
	}

		   // menuButtom Save
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (filePath != nullptr) {
			// If filePath is already set, save changes to the same file
			msclr::interop::marshal_context context;
			std::ofstream outFile(context.marshal_as<std::string>(filePath));
			if (outFile.is_open()) {
				String^ contents = richTextBox1->Text;
				outFile << context.marshal_as<std::string>(contents);
				outFile.close();
			}
			else {
				MessageBox::Show("Unable to save file!");
			}
		}
		else {
			// If filePath is null, prompt user to choose a file location
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			saveFileDialog1->InitialDirectory = "c:\\";
			saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
			saveFileDialog1->FilterIndex = 2;
			saveFileDialog1->RestoreDirectory = true;

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ fileName = saveFileDialog1->FileName;
				msclr::interop::marshal_context context;
				std::ofstream outFile(context.marshal_as<std::string>(fileName));
				if (outFile.is_open()) {
					String^ contents = richTextBox1->Text;
					outFile << context.marshal_as<std::string>(contents);
					outFile.close();
					// Store the file path for future saves
					filePath = fileName;
				}
				else {
					MessageBox::Show("Unable to save file!");
				}
			}
		}
	}

		   // menuButtom Open
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		// Make a directory filter
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
				// Convert System::IO::Stream to std::ifstream
				filePath = openFileDialog1->FileName;
				msclr::interop::marshal_context context;
				std::ifstream file(context.marshal_as<std::string>(openFileDialog1->FileName));

				if (file.is_open()) {
					// Read the file
					std::string fileContents((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

					// Convert std::string to System::String
					String^ contents = gcnew String(fileContents.c_str());

					// Out it to the text box
					richTextBox1->Text = contents;

					file.close();
				}
				else {
					MessageBox::Show("Unable to open file!");
				}

				myStream->Close();



			}
		}
	}

		   // Buttom New
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Buttom Save
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Buttom Open
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   // Cut function only choosen words
	private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectedText != "") {
			Clipboard::SetText(richTextBox1->SelectedText);
			richTextBox1->SelectedText = "";
		}
	}
		   // Copy function only choosen words
	private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectedText != "") {
			Clipboard::SetText(richTextBox1->SelectedText);
		}
	}
		   // Paste function from Clipboard
	private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Clipboard::ContainsText()) {
			richTextBox1->SelectedText = Clipboard::GetText();
		}
	}

	private: System::Void mainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   // font buttom (style)
	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
		}
	}
		   // font color buttom (style)
	private: System::Void fontColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->ForeColor = colorDialog1->Color;
		}
	}
		   // backgound buttom (style)
	private: System::Void backgroundColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->BackColor = colorDialog1->Color;
		}
	}

		   // set a default language
	private:
		System::Drawing::Font^ defaultFont;
		System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
			// Store the default font of richTextBox1
			defaultFont = richTextBox1->Font;
		}
		// reset buttom
	private: System::Void resetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Reset font to default ()
		richTextBox1->Font = defaultFont;

		// Reset font color to default (black)
		richTextBox1->ForeColor = System::Drawing::Color::Black;

		// Reset background color to default (white)
		richTextBox1->BackColor = System::Drawing::Color::White;
	}
	private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		//About
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	about^ aboutForm = gcnew about;
	aboutForm->Show();
}
};

}