#pragma once
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

namespace vpk_ui {

	using namespace System;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VPKui
	/// </summary>
	public ref class VPKui : public System::Windows::Forms::Form
	{
	public:
		VPKui(void)
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
		~VPKui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::CheckBox^  checkBox2;



	private: System::Windows::Forms::Button^  button2;



	public:
		String^ dir_path;
		bool HasSelectedDir = false;
		bool IsMultiChunk = false;
		bool IsAligned = true;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	public:
	private: System::Windows::Forms::RichTextBox^  LogBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  chunksize_text;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VPKui::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->chunksize_text = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->LogBox = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Execute";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VPKui::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox2->Location = System::Drawing::Point(6, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(124, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Multi-chunk pack file";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &VPKui::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Choose Directory";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VPKui::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->chunksize_text);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 245);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(6, 66);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(138, 17);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Align files within chunks";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &VPKui::checkBox3_CheckedChanged);
			// 
			// chunksize_text
			// 
			this->chunksize_text->BackColor = System::Drawing::SystemColors::GrayText;
			this->chunksize_text->Enabled = false;
			this->chunksize_text->ForeColor = System::Drawing::SystemColors::Info;
			this->chunksize_text->Location = System::Drawing::Point(85, 40);
			this->chunksize_text->Name = L"chunksize_text";
			this->chunksize_text->Size = System::Drawing::Size(38, 20);
			this->chunksize_text->TabIndex = 3;
			this->chunksize_text->Text = L"200";
			this->chunksize_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(6, 42);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Chunk Size";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &VPKui::checkBox1_CheckedChanged);
			// 
			// LogBox
			// 
			this->LogBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->LogBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LogBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LogBox->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogBox->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->LogBox->Location = System::Drawing::Point(3, 16);
			this->LogBox->Name = L"LogBox";
			this->LogBox->ReadOnly = true;
			this->LogBox->Size = System::Drawing::Size(568, 255);
			this->LogBox->TabIndex = 5;
			this->LogBox->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->LogBox);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(197, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(574, 274);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Events Log";
			// 
			// VPKui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(783, 298);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"VPKui";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VPK UI";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		// Lets open up the directory
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			FolderBrowserDialog^ folderBrowserDialog1;
			folderBrowserDialog1 = gcnew System::Windows::Forms::FolderBrowserDialog;

			// Show the FolderBrowserDialog.
			System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				HasSelectedDir = true;
				dir_path = folderBrowserDialog1->SelectedPath;

				LogBox->Text += "Directory selected: \"" + dir_path + "\"\n";
			}
		}
		// Executes the vpk
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if (HasSelectedDir)
			{
				// Lets grab the needed information
				String^ target = "vpk.exe";
				String^ target_arguments;
				String^ misc_arguments;

				if (checkBox1->Enabled)
					misc_arguments += " -c " + chunksize_text->Text;

				if (!IsAligned)
					misc_arguments += " -a 0";

				target_arguments = misc_arguments + " \"" + dir_path + "\"";

				if (IsMultiChunk)
					target_arguments = misc_arguments + " -M \"" + dir_path + "\"";

				// Lets grab the INI File
				LPCTSTR vpk_file = L"vpk.exe";

				// Lets check if the file exist
				WIN32_FIND_DATA FindFileData;
				HANDLE hFind = INVALID_HANDLE_VALUE;

				hFind = FindFirstFile(vpk_file, &FindFileData);
				GetLastError();

				// Check if the application exist
				if (hFind == INVALID_HANDLE_VALUE)
				{
					MessageBox::Show(
						"vpk.exe is missing from the directory!",
						"VPK UI :: Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error
						);
					return;
				}

				//Launch the application
			//	System::Diagnostics::Process::Start(target, target_path);

				Process^ process = gcnew Process();
				process->StartInfo->FileName = target;
				process->StartInfo->Arguments = target_arguments;
				process->StartInfo->UseShellExecute = false;
				process->StartInfo->RedirectStandardOutput = true;
				process->Start();
				
				// Synchronously read the standard output of the spawned process-> 
				StreamReader^ reader = process->StandardOutput;
				String^ output = reader->ReadToEnd();

				// Write the redirected output to this application's window.
				LogBox->Text += output;
				LogBox->SelectionStart = LogBox->Text->Length;
				LogBox->ScrollToCaret();

				process->WaitForExit();
				process->Close();
			}
			else
			{
				MessageBox::Show(
					"You can't execute the VPK with a null argument!",
					"VPK UI :: Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
			}
		}
		// Options
		// Multi-chunk
		private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox2->Checked)
			{
				checkBox1->Enabled = true;
				IsMultiChunk = true;
			}
			else
			{
				checkBox1->Enabled = false;
				IsMultiChunk = false;
			}
		}
		private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (IsMultiChunk)
				if (checkBox1->Checked)
					chunksize_text->Enabled = true;
				else
					chunksize_text->Enabled = false;
		}
		private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox3->Checked)
				IsAligned = true;
			else
				IsAligned = false;
		}
	};
}
