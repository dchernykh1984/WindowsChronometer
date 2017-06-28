#pragma once
#include <sys/timeb.h>
#include <time.h>
#include <string.h>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include "additionalClasses.h"
#include <direct.h>
#include <math.h>



namespace SportTimerClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		static const int numberOfCharsInString = 500;
		static Control^ focusedControl;

	private: System::Windows::Forms::Button^  buttonFinishFirst;
	private: System::Windows::Forms::Button^  buttonFinishSecond;
	private: System::Windows::Forms::Button^  buttonFinishThird;
	protected: 



	private: System::Windows::Forms::TextBox^  textBoxFirstNumber;
	private: System::Windows::Forms::TextBox^  textBoxFirstTime;
	protected: 





	private: System::Windows::Forms::TextBox^  textBoxSecondNumber;
	private: System::Windows::Forms::TextBox^  textBoxSecondTime;


	private: System::Windows::Forms::TextBox^  textBoxThirdNumber;
	private: System::Windows::Forms::TextBox^  textBoxThirdTime;


	private: System::Windows::Forms::Label^  labelStartNumber;
	private: System::Windows::Forms::Label^  labelControlPointTime;
	private: System::Windows::Forms::Button^  buttonSaveAndShift;
	private: System::Windows::Forms::Button^  buttonSaveAllAndEmpty;




	private: System::Windows::Forms::Button^  buttonSaveFirst;
	private: System::Windows::Forms::Button^  buttonSaveSecond;
	private: System::Windows::Forms::Button^  buttonSaveThird;



	private: System::Windows::Forms::Button^  buttonFinishAll;

	private: System::Windows::Forms::TextBox^  textBoxNextNumber;
	private: System::Windows::Forms::Label^  labelTimerFromStart;
	private: System::Windows::Forms::Button^  buttonSelectResultsFille;

	private: System::Windows::Forms::TextBox^  textBoxResultsFile;





	private: System::Windows::Forms::CheckBox^  checkBoxFreezeFilePath;



	private: System::Windows::Forms::Button^  buttonFinishFourth;
	private: System::Windows::Forms::Button^  buttonSaveFourth;
	private: System::Windows::Forms::Button^  buttonFinishFifth;
	private: System::Windows::Forms::Button^  buttonSaveFifth;




	private: System::Windows::Forms::TextBox^  textBoxFourthNumber;
	private: System::Windows::Forms::TextBox^  textBoxFifthNumber;
	private: System::Windows::Forms::TextBox^  textBoxFourthTime;
	private: System::Windows::Forms::TextBox^  textBoxFifthTime;

	private: System::Windows::Forms::Button^  buttonStartGroup;
	private: System::Windows::Forms::Label^  labelResultsFile;


	private: System::Windows::Forms::Button^  buttonSaveGroup;

	private: System::Windows::Forms::TextBox^  textBoxGroupTime;
	private: System::Windows::Forms::Button^  buttonSelectGroupStartFile;


	private: System::Windows::Forms::TextBox^  textBoxGroupStartFile;


	private: System::Windows::Forms::Label^  labelGroupStartFile;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  buttonEmptyAll;
private: System::Windows::Forms::CheckBox^  checkBoxFinishCompetitor;
private: System::Windows::Forms::Label^  labelDSQNumber;
private: System::Windows::Forms::TextBox^  textBoxDSQNumber;
private: System::Windows::Forms::Button^  buttonDSQ;

private: System::Windows::Forms::ListBox^  listBoxActionLog;
private: System::Windows::Forms::Timer^  timerLableRefresher;
private: System::Windows::Forms::CheckBox^  checkBoxUseSummerTimeShifting;
private: System::Windows::Forms::Button^  buttonLoadGroupsList;
private: System::Windows::Forms::ComboBox^  comboBoxGroupNumber;
private: System::Windows::Forms::Button^  buttonFinishButtonForSecondUser;
private: System::Windows::Forms::CheckBox^  checkBoxEnableSecondUser;
private: System::Windows::Forms::CheckBox^  checkBoxDisableBackup;
private: System::Windows::Forms::Label^  labelCrossesFifth;
private: System::Windows::Forms::Label^  labelCrossesFourth;

private: System::Windows::Forms::Label^  labelCrossesThird;

private: System::Windows::Forms::Label^  labelCrossesSecond;

private: System::Windows::Forms::Label^  labelCrossesFirst;
private: System::Windows::Forms::Label^  labelLap;
private: System::Windows::Forms::TextBox^  textBoxMaxLapsNumber;
private: System::Windows::Forms::Label^  labelFinishAll;



private: System::ComponentModel::IContainer^  components;

















	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->buttonFinishFirst = (gcnew System::Windows::Forms::Button());
			this->buttonFinishSecond = (gcnew System::Windows::Forms::Button());
			this->buttonFinishThird = (gcnew System::Windows::Forms::Button());
			this->textBoxFirstNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSecondNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSecondTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxThirdNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxThirdTime = (gcnew System::Windows::Forms::TextBox());
			this->labelStartNumber = (gcnew System::Windows::Forms::Label());
			this->labelControlPointTime = (gcnew System::Windows::Forms::Label());
			this->buttonSaveAndShift = (gcnew System::Windows::Forms::Button());
			this->buttonSaveAllAndEmpty = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFirst = (gcnew System::Windows::Forms::Button());
			this->buttonSaveSecond = (gcnew System::Windows::Forms::Button());
			this->buttonSaveThird = (gcnew System::Windows::Forms::Button());
			this->buttonFinishAll = (gcnew System::Windows::Forms::Button());
			this->textBoxNextNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelTimerFromStart = (gcnew System::Windows::Forms::Label());
			this->buttonSelectResultsFille = (gcnew System::Windows::Forms::Button());
			this->textBoxResultsFile = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxFreezeFilePath = (gcnew System::Windows::Forms::CheckBox());
			this->buttonFinishFourth = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFourth = (gcnew System::Windows::Forms::Button());
			this->buttonFinishFifth = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFifth = (gcnew System::Windows::Forms::Button());
			this->textBoxFourthNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFifthNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFourthTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFifthTime = (gcnew System::Windows::Forms::TextBox());
			this->buttonStartGroup = (gcnew System::Windows::Forms::Button());
			this->labelResultsFile = (gcnew System::Windows::Forms::Label());
			this->buttonSaveGroup = (gcnew System::Windows::Forms::Button());
			this->textBoxGroupTime = (gcnew System::Windows::Forms::TextBox());
			this->buttonSelectGroupStartFile = (gcnew System::Windows::Forms::Button());
			this->textBoxGroupStartFile = (gcnew System::Windows::Forms::TextBox());
			this->labelGroupStartFile = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEmptyAll = (gcnew System::Windows::Forms::Button());
			this->checkBoxFinishCompetitor = (gcnew System::Windows::Forms::CheckBox());
			this->labelDSQNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxDSQNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonDSQ = (gcnew System::Windows::Forms::Button());
			this->listBoxActionLog = (gcnew System::Windows::Forms::ListBox());
			this->timerLableRefresher = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBoxUseSummerTimeShifting = (gcnew System::Windows::Forms::CheckBox());
			this->buttonLoadGroupsList = (gcnew System::Windows::Forms::Button());
			this->comboBoxGroupNumber = (gcnew System::Windows::Forms::ComboBox());
			this->buttonFinishButtonForSecondUser = (gcnew System::Windows::Forms::Button());
			this->checkBoxEnableSecondUser = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDisableBackup = (gcnew System::Windows::Forms::CheckBox());
			this->labelCrossesFifth = (gcnew System::Windows::Forms::Label());
			this->labelCrossesFourth = (gcnew System::Windows::Forms::Label());
			this->labelCrossesThird = (gcnew System::Windows::Forms::Label());
			this->labelCrossesSecond = (gcnew System::Windows::Forms::Label());
			this->labelCrossesFirst = (gcnew System::Windows::Forms::Label());
			this->labelLap = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxLapsNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelFinishAll = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonFinishFirst
			// 
			this->buttonFinishFirst->Location = System::Drawing::Point(273, 30);
			this->buttonFinishFirst->Name = L"buttonFinishFirst";
			this->buttonFinishFirst->Size = System::Drawing::Size(75, 23);
			this->buttonFinishFirst->TabIndex = 0;
			this->buttonFinishFirst->Text = L"Finish";
			this->buttonFinishFirst->UseVisualStyleBackColor = true;
			this->buttonFinishFirst->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// buttonFinishSecond
			// 
			this->buttonFinishSecond->Location = System::Drawing::Point(273, 59);
			this->buttonFinishSecond->Name = L"buttonFinishSecond";
			this->buttonFinishSecond->Size = System::Drawing::Size(75, 23);
			this->buttonFinishSecond->TabIndex = 1;
			this->buttonFinishSecond->Text = L"Finish";
			this->buttonFinishSecond->UseVisualStyleBackColor = true;
			this->buttonFinishSecond->Click += gcnew System::EventHandler(this, &Form1::buttonFinishSecond_Click);
			// 
			// buttonFinishThird
			// 
			this->buttonFinishThird->Location = System::Drawing::Point(273, 87);
			this->buttonFinishThird->Name = L"buttonFinishThird";
			this->buttonFinishThird->Size = System::Drawing::Size(75, 23);
			this->buttonFinishThird->TabIndex = 2;
			this->buttonFinishThird->Text = L"Finish";
			this->buttonFinishThird->UseVisualStyleBackColor = true;
			this->buttonFinishThird->Click += gcnew System::EventHandler(this, &Form1::buttonFinishThird_Click);
			// 
			// textBoxFirstNumber
			// 
			this->textBoxFirstNumber->Location = System::Drawing::Point(13, 33);
			this->textBoxFirstNumber->Name = L"textBoxFirstNumber";
			this->textBoxFirstNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxFirstNumber->TabIndex = 5;
			this->textBoxFirstNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxFirstNumber_KeyDown);
			this->textBoxFirstNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxFirstNumber_Enter);
			// 
			// textBoxFirstTime
			// 
			this->textBoxFirstTime->Location = System::Drawing::Point(120, 33);
			this->textBoxFirstTime->Name = L"textBoxFirstTime";
			this->textBoxFirstTime->Size = System::Drawing::Size(147, 20);
			this->textBoxFirstTime->TabIndex = 6;
			// 
			// textBoxSecondNumber
			// 
			this->textBoxSecondNumber->Location = System::Drawing::Point(13, 61);
			this->textBoxSecondNumber->Name = L"textBoxSecondNumber";
			this->textBoxSecondNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxSecondNumber->TabIndex = 7;
			this->textBoxSecondNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxSecondNumber_KeyDown);
			this->textBoxSecondNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxSecondNumber_Enter);
			// 
			// textBoxSecondTime
			// 
			this->textBoxSecondTime->Location = System::Drawing::Point(120, 61);
			this->textBoxSecondTime->Name = L"textBoxSecondTime";
			this->textBoxSecondTime->Size = System::Drawing::Size(147, 20);
			this->textBoxSecondTime->TabIndex = 8;
			// 
			// textBoxThirdNumber
			// 
			this->textBoxThirdNumber->Location = System::Drawing::Point(13, 89);
			this->textBoxThirdNumber->Name = L"textBoxThirdNumber";
			this->textBoxThirdNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxThirdNumber->TabIndex = 9;
			this->textBoxThirdNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxThirdNumber_KeyDown);
			this->textBoxThirdNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxThirdNumber_Enter);
			// 
			// textBoxThirdTime
			// 
			this->textBoxThirdTime->Location = System::Drawing::Point(120, 89);
			this->textBoxThirdTime->Name = L"textBoxThirdTime";
			this->textBoxThirdTime->Size = System::Drawing::Size(147, 20);
			this->textBoxThirdTime->TabIndex = 10;
			// 
			// labelStartNumber
			// 
			this->labelStartNumber->AutoSize = true;
			this->labelStartNumber->Location = System::Drawing::Point(13, 13);
			this->labelStartNumber->Name = L"labelStartNumber";
			this->labelStartNumber->Size = System::Drawing::Size(69, 13);
			this->labelStartNumber->TabIndex = 11;
			this->labelStartNumber->Text = L"Start Number";
			// 
			// labelControlPointTime
			// 
			this->labelControlPointTime->AutoSize = true;
			this->labelControlPointTime->Location = System::Drawing::Point(120, 13);
			this->labelControlPointTime->Name = L"labelControlPointTime";
			this->labelControlPointTime->Size = System::Drawing::Size(93, 13);
			this->labelControlPointTime->TabIndex = 12;
			this->labelControlPointTime->Text = L"Control Point Time";
			// 
			// buttonSaveAndShift
			// 
			this->buttonSaveAndShift->Location = System::Drawing::Point(273, 176);
			this->buttonSaveAndShift->Name = L"buttonSaveAndShift";
			this->buttonSaveAndShift->Size = System::Drawing::Size(156, 23);
			this->buttonSaveAndShift->TabIndex = 13;
			this->buttonSaveAndShift->Text = L"Save First and Shift Fields UP";
			this->buttonSaveAndShift->UseVisualStyleBackColor = true;
			this->buttonSaveAndShift->Click += gcnew System::EventHandler(this, &Form1::buttonSaveAndShift_Click);
			// 
			// buttonSaveAllAndEmpty
			// 
			this->buttonSaveAllAndEmpty->Location = System::Drawing::Point(354, 205);
			this->buttonSaveAllAndEmpty->Name = L"buttonSaveAllAndEmpty";
			this->buttonSaveAllAndEmpty->Size = System::Drawing::Size(75, 51);
			this->buttonSaveAllAndEmpty->TabIndex = 14;
			this->buttonSaveAllAndEmpty->Text = L"Save All and Empty fields";
			this->buttonSaveAllAndEmpty->UseVisualStyleBackColor = true;
			this->buttonSaveAllAndEmpty->Click += gcnew System::EventHandler(this, &Form1::buttonSaveAllAndEmpty_Click);
			// 
			// buttonSaveFirst
			// 
			this->buttonSaveFirst->Location = System::Drawing::Point(354, 30);
			this->buttonSaveFirst->Name = L"buttonSaveFirst";
			this->buttonSaveFirst->Size = System::Drawing::Size(75, 23);
			this->buttonSaveFirst->TabIndex = 15;
			this->buttonSaveFirst->Text = L"Save";
			this->buttonSaveFirst->UseVisualStyleBackColor = true;
			this->buttonSaveFirst->Click += gcnew System::EventHandler(this, &Form1::buttonSaveFirst_Click);
			// 
			// buttonSaveSecond
			// 
			this->buttonSaveSecond->Location = System::Drawing::Point(354, 59);
			this->buttonSaveSecond->Name = L"buttonSaveSecond";
			this->buttonSaveSecond->Size = System::Drawing::Size(75, 23);
			this->buttonSaveSecond->TabIndex = 16;
			this->buttonSaveSecond->Text = L"Save";
			this->buttonSaveSecond->UseVisualStyleBackColor = true;
			this->buttonSaveSecond->Click += gcnew System::EventHandler(this, &Form1::buttonSaveSecond_Click);
			// 
			// buttonSaveThird
			// 
			this->buttonSaveThird->Location = System::Drawing::Point(354, 90);
			this->buttonSaveThird->Name = L"buttonSaveThird";
			this->buttonSaveThird->Size = System::Drawing::Size(74, 23);
			this->buttonSaveThird->TabIndex = 17;
			this->buttonSaveThird->Text = L"Save";
			this->buttonSaveThird->UseVisualStyleBackColor = true;
			this->buttonSaveThird->Click += gcnew System::EventHandler(this, &Form1::buttonSaveThird_Click);
			// 
			// buttonFinishAll
			// 
			this->buttonFinishAll->Location = System::Drawing::Point(273, 205);
			this->buttonFinishAll->Name = L"buttonFinishAll";
			this->buttonFinishAll->Size = System::Drawing::Size(75, 51);
			this->buttonFinishAll->TabIndex = 18;
			this->buttonFinishAll->Text = L"Finish All";
			this->buttonFinishAll->UseVisualStyleBackColor = true;
			this->buttonFinishAll->Click += gcnew System::EventHandler(this, &Form1::buttonFinishAll_Click);
			// 
			// textBoxNextNumber
			// 
			this->textBoxNextNumber->Location = System::Drawing::Point(13, 178);
			this->textBoxNextNumber->Name = L"textBoxNextNumber";
			this->textBoxNextNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxNextNumber->TabIndex = 19;
			this->textBoxNextNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxNextNumber_KeyDown);
			this->textBoxNextNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxNextNumber_Enter);
			// 
			// labelTimerFromStart
			// 
			this->labelTimerFromStart->AutoSize = true;
			this->labelTimerFromStart->Location = System::Drawing::Point(120, 181);
			this->labelTimerFromStart->Name = L"labelTimerFromStart";
			this->labelTimerFromStart->Size = System::Drawing::Size(64, 13);
			this->labelTimerFromStart->TabIndex = 20;
			this->labelTimerFromStart->Text = L"00:00:00,00";
			// 
			// buttonSelectResultsFille
			// 
			this->buttonSelectResultsFille->Enabled = false;
			this->buttonSelectResultsFille->Location = System::Drawing::Point(354, 321);
			this->buttonSelectResultsFille->Name = L"buttonSelectResultsFille";
			this->buttonSelectResultsFille->Size = System::Drawing::Size(75, 23);
			this->buttonSelectResultsFille->TabIndex = 21;
			this->buttonSelectResultsFille->Text = L"Select";
			this->buttonSelectResultsFille->UseVisualStyleBackColor = true;
			this->buttonSelectResultsFille->Click += gcnew System::EventHandler(this, &Form1::buttonSelectResultsFille_Click);
			// 
			// textBoxResultsFile
			// 
			this->textBoxResultsFile->Enabled = false;
			this->textBoxResultsFile->Location = System::Drawing::Point(123, 323);
			this->textBoxResultsFile->Name = L"textBoxResultsFile";
			this->textBoxResultsFile->Size = System::Drawing::Size(225, 20);
			this->textBoxResultsFile->TabIndex = 22;
			this->textBoxResultsFile->Text = L"results.txt";
			// 
			// checkBoxFreezeFilePath
			// 
			this->checkBoxFreezeFilePath->AutoSize = true;
			this->checkBoxFreezeFilePath->Checked = true;
			this->checkBoxFreezeFilePath->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxFreezeFilePath->Location = System::Drawing::Point(13, 372);
			this->checkBoxFreezeFilePath->Name = L"checkBoxFreezeFilePath";
			this->checkBoxFreezeFilePath->Size = System::Drawing::Size(107, 17);
			this->checkBoxFreezeFilePath->TabIndex = 23;
			this->checkBoxFreezeFilePath->Text = L"Freeze File Paths";
			this->checkBoxFreezeFilePath->UseVisualStyleBackColor = true;
			this->checkBoxFreezeFilePath->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxFreezeFilePath_CheckedChanged);
			// 
			// buttonFinishFourth
			// 
			this->buttonFinishFourth->Location = System::Drawing::Point(273, 117);
			this->buttonFinishFourth->Name = L"buttonFinishFourth";
			this->buttonFinishFourth->Size = System::Drawing::Size(75, 23);
			this->buttonFinishFourth->TabIndex = 24;
			this->buttonFinishFourth->Text = L"Finish";
			this->buttonFinishFourth->UseVisualStyleBackColor = true;
			this->buttonFinishFourth->Click += gcnew System::EventHandler(this, &Form1::buttonFinishFourth_Click);
			// 
			// buttonSaveFourth
			// 
			this->buttonSaveFourth->Location = System::Drawing::Point(354, 117);
			this->buttonSaveFourth->Name = L"buttonSaveFourth";
			this->buttonSaveFourth->Size = System::Drawing::Size(75, 23);
			this->buttonSaveFourth->TabIndex = 25;
			this->buttonSaveFourth->Text = L"Save";
			this->buttonSaveFourth->UseVisualStyleBackColor = true;
			this->buttonSaveFourth->Click += gcnew System::EventHandler(this, &Form1::buttonSaveFourth_Click);
			// 
			// buttonFinishFifth
			// 
			this->buttonFinishFifth->Location = System::Drawing::Point(273, 147);
			this->buttonFinishFifth->Name = L"buttonFinishFifth";
			this->buttonFinishFifth->Size = System::Drawing::Size(75, 23);
			this->buttonFinishFifth->TabIndex = 26;
			this->buttonFinishFifth->Text = L"Finish";
			this->buttonFinishFifth->UseVisualStyleBackColor = true;
			this->buttonFinishFifth->Click += gcnew System::EventHandler(this, &Form1::buttonFinishFifth_Click);
			// 
			// buttonSaveFifth
			// 
			this->buttonSaveFifth->Location = System::Drawing::Point(354, 147);
			this->buttonSaveFifth->Name = L"buttonSaveFifth";
			this->buttonSaveFifth->Size = System::Drawing::Size(75, 23);
			this->buttonSaveFifth->TabIndex = 27;
			this->buttonSaveFifth->Text = L"Save";
			this->buttonSaveFifth->UseVisualStyleBackColor = true;
			this->buttonSaveFifth->Click += gcnew System::EventHandler(this, &Form1::buttonSaveFifth_Click);
			// 
			// textBoxFourthNumber
			// 
			this->textBoxFourthNumber->Location = System::Drawing::Point(13, 119);
			this->textBoxFourthNumber->Name = L"textBoxFourthNumber";
			this->textBoxFourthNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxFourthNumber->TabIndex = 28;
			this->textBoxFourthNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxFourthNumber_KeyDown);
			this->textBoxFourthNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxFourthNumber_Enter);
			// 
			// textBoxFifthNumber
			// 
			this->textBoxFifthNumber->Location = System::Drawing::Point(13, 149);
			this->textBoxFifthNumber->Name = L"textBoxFifthNumber";
			this->textBoxFifthNumber->Size = System::Drawing::Size(74, 20);
			this->textBoxFifthNumber->TabIndex = 29;
			this->textBoxFifthNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxFifthNumber_KeyDown);
			this->textBoxFifthNumber->Enter += gcnew System::EventHandler(this, &Form1::textBoxFifthNumber_Enter);
			// 
			// textBoxFourthTime
			// 
			this->textBoxFourthTime->Location = System::Drawing::Point(120, 119);
			this->textBoxFourthTime->Name = L"textBoxFourthTime";
			this->textBoxFourthTime->Size = System::Drawing::Size(147, 20);
			this->textBoxFourthTime->TabIndex = 30;
			// 
			// textBoxFifthTime
			// 
			this->textBoxFifthTime->Location = System::Drawing::Point(120, 149);
			this->textBoxFifthTime->Name = L"textBoxFifthTime";
			this->textBoxFifthTime->Size = System::Drawing::Size(147, 20);
			this->textBoxFifthTime->TabIndex = 31;
			// 
			// buttonStartGroup
			// 
			this->buttonStartGroup->Location = System::Drawing::Point(273, 290);
			this->buttonStartGroup->Name = L"buttonStartGroup";
			this->buttonStartGroup->Size = System::Drawing::Size(75, 23);
			this->buttonStartGroup->TabIndex = 34;
			this->buttonStartGroup->Text = L"Start Group";
			this->buttonStartGroup->UseVisualStyleBackColor = true;
			this->buttonStartGroup->Click += gcnew System::EventHandler(this, &Form1::buttonStartGroup_Click);
			// 
			// labelResultsFile
			// 
			this->labelResultsFile->AutoSize = true;
			this->labelResultsFile->Location = System::Drawing::Point(10, 326);
			this->labelResultsFile->Name = L"labelResultsFile";
			this->labelResultsFile->Size = System::Drawing::Size(58, 13);
			this->labelResultsFile->TabIndex = 35;
			this->labelResultsFile->Text = L"Results file";
			// 
			// buttonSaveGroup
			// 
			this->buttonSaveGroup->Location = System::Drawing::Point(354, 290);
			this->buttonSaveGroup->Name = L"buttonSaveGroup";
			this->buttonSaveGroup->Size = System::Drawing::Size(75, 23);
			this->buttonSaveGroup->TabIndex = 36;
			this->buttonSaveGroup->Text = L"Save Group";
			this->buttonSaveGroup->UseVisualStyleBackColor = true;
			this->buttonSaveGroup->Click += gcnew System::EventHandler(this, &Form1::buttonSaveGroup_Click);
			// 
			// textBoxGroupTime
			// 
			this->textBoxGroupTime->Location = System::Drawing::Point(12, 292);
			this->textBoxGroupTime->Name = L"textBoxGroupTime";
			this->textBoxGroupTime->Size = System::Drawing::Size(254, 20);
			this->textBoxGroupTime->TabIndex = 38;
			this->textBoxGroupTime->Text = L"0 00:00:00.000";
			// 
			// buttonSelectGroupStartFile
			// 
			this->buttonSelectGroupStartFile->Enabled = false;
			this->buttonSelectGroupStartFile->Location = System::Drawing::Point(353, 350);
			this->buttonSelectGroupStartFile->Name = L"buttonSelectGroupStartFile";
			this->buttonSelectGroupStartFile->Size = System::Drawing::Size(75, 23);
			this->buttonSelectGroupStartFile->TabIndex = 39;
			this->buttonSelectGroupStartFile->Text = L"Select";
			this->buttonSelectGroupStartFile->UseVisualStyleBackColor = true;
			this->buttonSelectGroupStartFile->Click += gcnew System::EventHandler(this, &Form1::buttonSelectGroupStartFile_Click);
			// 
			// textBoxGroupStartFile
			// 
			this->textBoxGroupStartFile->Enabled = false;
			this->textBoxGroupStartFile->Location = System::Drawing::Point(123, 352);
			this->textBoxGroupStartFile->Name = L"textBoxGroupStartFile";
			this->textBoxGroupStartFile->Size = System::Drawing::Size(225, 20);
			this->textBoxGroupStartFile->TabIndex = 40;
			this->textBoxGroupStartFile->Text = L"groups.txt";
			// 
			// labelGroupStartFile
			// 
			this->labelGroupStartFile->AutoSize = true;
			this->labelGroupStartFile->Location = System::Drawing::Point(12, 355);
			this->labelGroupStartFile->Name = L"labelGroupStartFile";
			this->labelGroupStartFile->Size = System::Drawing::Size(75, 13);
			this->labelGroupStartFile->TabIndex = 41;
			this->labelGroupStartFile->Text = L"Group start file";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Group Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Start Time";
			// 
			// buttonEmptyAll
			// 
			this->buttonEmptyAll->Location = System::Drawing::Point(13, 204);
			this->buttonEmptyAll->Name = L"buttonEmptyAll";
			this->buttonEmptyAll->Size = System::Drawing::Size(100, 27);
			this->buttonEmptyAll->TabIndex = 44;
			this->buttonEmptyAll->Text = L"Empty All";
			this->buttonEmptyAll->UseVisualStyleBackColor = true;
			this->buttonEmptyAll->Click += gcnew System::EventHandler(this, &Form1::buttonEmptyAll_Click);
			// 
			// checkBoxFinishCompetitor
			// 
			this->checkBoxFinishCompetitor->AutoSize = true;
			this->checkBoxFinishCompetitor->Location = System::Drawing::Point(120, 210);
			this->checkBoxFinishCompetitor->Name = L"checkBoxFinishCompetitor";
			this->checkBoxFinishCompetitor->Size = System::Drawing::Size(111, 17);
			this->checkBoxFinishCompetitor->TabIndex = 45;
			this->checkBoxFinishCompetitor->Text = L"Finish Competitors";
			this->checkBoxFinishCompetitor->UseVisualStyleBackColor = true;
			// 
			// labelDSQNumber
			// 
			this->labelDSQNumber->AutoSize = true;
			this->labelDSQNumber->Location = System::Drawing::Point(172, 396);
			this->labelDSQNumber->Name = L"labelDSQNumber";
			this->labelDSQNumber->Size = System::Drawing::Size(70, 13);
			this->labelDSQNumber->TabIndex = 46;
			this->labelDSQNumber->Text = L"DSQ Number";
			// 
			// textBoxDSQNumber
			// 
			this->textBoxDSQNumber->Location = System::Drawing::Point(248, 393);
			this->textBoxDSQNumber->Name = L"textBoxDSQNumber";
			this->textBoxDSQNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxDSQNumber->TabIndex = 47;
			// 
			// buttonDSQ
			// 
			this->buttonDSQ->Location = System::Drawing::Point(354, 391);
			this->buttonDSQ->Name = L"buttonDSQ";
			this->buttonDSQ->Size = System::Drawing::Size(75, 23);
			this->buttonDSQ->TabIndex = 48;
			this->buttonDSQ->Text = L"DSQ";
			this->buttonDSQ->UseVisualStyleBackColor = true;
			this->buttonDSQ->Click += gcnew System::EventHandler(this, &Form1::buttonDSQ_Click);
			// 
			// listBoxActionLog
			// 
			this->listBoxActionLog->FormattingEnabled = true;
			this->listBoxActionLog->HorizontalScrollbar = true;
			this->listBoxActionLog->Location = System::Drawing::Point(450, 20);
			this->listBoxActionLog->Name = L"listBoxActionLog";
			this->listBoxActionLog->Size = System::Drawing::Size(380, 394);
			this->listBoxActionLog->TabIndex = 50;
			// 
			// timerLableRefresher
			// 
			this->timerLableRefresher->Enabled = true;
			this->timerLableRefresher->Interval = 1;
			this->timerLableRefresher->Tick += gcnew System::EventHandler(this, &Form1::timerLableRefresher_Tick);
			// 
			// checkBoxUseSummerTimeShifting
			// 
			this->checkBoxUseSummerTimeShifting->AutoSize = true;
			this->checkBoxUseSummerTimeShifting->Checked = true;
			this->checkBoxUseSummerTimeShifting->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxUseSummerTimeShifting->Enabled = false;
			this->checkBoxUseSummerTimeShifting->Location = System::Drawing::Point(13, 395);
			this->checkBoxUseSummerTimeShifting->Name = L"checkBoxUseSummerTimeShifting";
			this->checkBoxUseSummerTimeShifting->Size = System::Drawing::Size(150, 17);
			this->checkBoxUseSummerTimeShifting->TabIndex = 51;
			this->checkBoxUseSummerTimeShifting->Text = L"Use Summer Time Shifting";
			this->checkBoxUseSummerTimeShifting->UseVisualStyleBackColor = true;
			// 
			// buttonLoadGroupsList
			// 
			this->buttonLoadGroupsList->Location = System::Drawing::Point(353, 263);
			this->buttonLoadGroupsList->Name = L"buttonLoadGroupsList";
			this->buttonLoadGroupsList->Size = System::Drawing::Size(76, 23);
			this->buttonLoadGroupsList->TabIndex = 52;
			this->buttonLoadGroupsList->Text = L"Load Config";
			this->buttonLoadGroupsList->UseVisualStyleBackColor = true;
			this->buttonLoadGroupsList->Click += gcnew System::EventHandler(this, &Form1::buttonLoadGroupsList_Click);
			// 
			// comboBoxGroupNumber
			// 
			this->comboBoxGroupNumber->FormattingEnabled = true;
			this->comboBoxGroupNumber->Location = System::Drawing::Point(13, 265);
			this->comboBoxGroupNumber->Name = L"comboBoxGroupNumber";
			this->comboBoxGroupNumber->Size = System::Drawing::Size(334, 21);
			this->comboBoxGroupNumber->TabIndex = 53;
			this->comboBoxGroupNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxGroupNumber_KeyDown);
			// 
			// buttonFinishButtonForSecondUser
			// 
			this->buttonFinishButtonForSecondUser->Enabled = false;
			this->buttonFinishButtonForSecondUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonFinishButtonForSecondUser->Location = System::Drawing::Point(12, 418);
			this->buttonFinishButtonForSecondUser->Name = L"buttonFinishButtonForSecondUser";
			this->buttonFinishButtonForSecondUser->Size = System::Drawing::Size(818, 120);
			this->buttonFinishButtonForSecondUser->TabIndex = 54;
			this->buttonFinishButtonForSecondUser->Text = L"Finish button for Second User";
			this->buttonFinishButtonForSecondUser->UseVisualStyleBackColor = true;
			this->buttonFinishButtonForSecondUser->Click += gcnew System::EventHandler(this, &Form1::buttonFinishButtonForSecondUser_Click);
			// 
			// checkBoxEnableSecondUser
			// 
			this->checkBoxEnableSecondUser->AutoSize = true;
			this->checkBoxEnableSecondUser->Location = System::Drawing::Point(13, 544);
			this->checkBoxEnableSecondUser->Name = L"checkBoxEnableSecondUser";
			this->checkBoxEnableSecondUser->Size = System::Drawing::Size(124, 17);
			this->checkBoxEnableSecondUser->TabIndex = 55;
			this->checkBoxEnableSecondUser->Text = L"Enable Second User";
			this->checkBoxEnableSecondUser->UseVisualStyleBackColor = true;
			this->checkBoxEnableSecondUser->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxEnableSecondUser_CheckedChanged);
			// 
			// checkBoxDisableBackup
			// 
			this->checkBoxDisableBackup->AutoSize = true;
			this->checkBoxDisableBackup->Location = System::Drawing::Point(729, 544);
			this->checkBoxDisableBackup->Name = L"checkBoxDisableBackup";
			this->checkBoxDisableBackup->Size = System::Drawing::Size(101, 17);
			this->checkBoxDisableBackup->TabIndex = 56;
			this->checkBoxDisableBackup->Text = L"Disable Backup";
			this->checkBoxDisableBackup->UseVisualStyleBackColor = true;
			// 
			// labelCrossesFifth
			// 
			this->labelCrossesFifth->AutoSize = true;
			this->labelCrossesFifth->Location = System::Drawing::Point(93, 152);
			this->labelCrossesFifth->Name = L"labelCrossesFifth";
			this->labelCrossesFifth->Size = System::Drawing::Size(13, 13);
			this->labelCrossesFifth->TabIndex = 57;
			this->labelCrossesFifth->Text = L"0";
			// 
			// labelCrossesFourth
			// 
			this->labelCrossesFourth->AutoSize = true;
			this->labelCrossesFourth->Location = System::Drawing::Point(93, 122);
			this->labelCrossesFourth->Name = L"labelCrossesFourth";
			this->labelCrossesFourth->Size = System::Drawing::Size(13, 13);
			this->labelCrossesFourth->TabIndex = 58;
			this->labelCrossesFourth->Text = L"0";
			// 
			// labelCrossesThird
			// 
			this->labelCrossesThird->AutoSize = true;
			this->labelCrossesThird->Location = System::Drawing::Point(93, 92);
			this->labelCrossesThird->Name = L"labelCrossesThird";
			this->labelCrossesThird->Size = System::Drawing::Size(13, 13);
			this->labelCrossesThird->TabIndex = 59;
			this->labelCrossesThird->Text = L"0";
			// 
			// labelCrossesSecond
			// 
			this->labelCrossesSecond->AutoSize = true;
			this->labelCrossesSecond->Location = System::Drawing::Point(93, 64);
			this->labelCrossesSecond->Name = L"labelCrossesSecond";
			this->labelCrossesSecond->Size = System::Drawing::Size(13, 13);
			this->labelCrossesSecond->TabIndex = 60;
			this->labelCrossesSecond->Text = L"0";
			// 
			// labelCrossesFirst
			// 
			this->labelCrossesFirst->AutoSize = true;
			this->labelCrossesFirst->Location = System::Drawing::Point(93, 36);
			this->labelCrossesFirst->Name = L"labelCrossesFirst";
			this->labelCrossesFirst->Size = System::Drawing::Size(13, 13);
			this->labelCrossesFirst->TabIndex = 61;
			this->labelCrossesFirst->Text = L"0";
			// 
			// labelLap
			// 
			this->labelLap->AutoSize = true;
			this->labelLap->Location = System::Drawing::Point(93, 13);
			this->labelLap->Name = L"labelLap";
			this->labelLap->Size = System::Drawing::Size(25, 13);
			this->labelLap->TabIndex = 62;
			this->labelLap->Text = L"Lap";
			// 
			// textBoxMaxLapsNumber
			// 
			this->textBoxMaxLapsNumber->Enabled = false;
			this->textBoxMaxLapsNumber->Location = System::Drawing::Point(94, 177);
			this->textBoxMaxLapsNumber->Name = L"textBoxMaxLapsNumber";
			this->textBoxMaxLapsNumber->Size = System::Drawing::Size(19, 20);
			this->textBoxMaxLapsNumber->TabIndex = 63;
			this->textBoxMaxLapsNumber->Text = L"99";
			// 
			// labelFinishAll
			// 
			this->labelFinishAll->AutoSize = true;
			this->labelFinishAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelFinishAll->ForeColor = System::Drawing::Color::Red;
			this->labelFinishAll->Location = System::Drawing::Point(219, 1);
			this->labelFinishAll->Name = L"labelFinishAll";
			this->labelFinishAll->Size = System::Drawing::Size(129, 26);
			this->labelFinishAll->TabIndex = 64;
			this->labelFinishAll->Text = L"FINISH ALL";
			this->labelFinishAll->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 565);
			this->Controls->Add(this->labelFinishAll);
			this->Controls->Add(this->textBoxMaxLapsNumber);
			this->Controls->Add(this->labelLap);
			this->Controls->Add(this->labelCrossesFirst);
			this->Controls->Add(this->labelCrossesSecond);
			this->Controls->Add(this->labelCrossesThird);
			this->Controls->Add(this->labelCrossesFourth);
			this->Controls->Add(this->labelCrossesFifth);
			this->Controls->Add(this->checkBoxDisableBackup);
			this->Controls->Add(this->checkBoxEnableSecondUser);
			this->Controls->Add(this->buttonFinishButtonForSecondUser);
			this->Controls->Add(this->comboBoxGroupNumber);
			this->Controls->Add(this->buttonLoadGroupsList);
			this->Controls->Add(this->checkBoxUseSummerTimeShifting);
			this->Controls->Add(this->listBoxActionLog);
			this->Controls->Add(this->buttonDSQ);
			this->Controls->Add(this->textBoxDSQNumber);
			this->Controls->Add(this->labelDSQNumber);
			this->Controls->Add(this->checkBoxFinishCompetitor);
			this->Controls->Add(this->buttonEmptyAll);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelGroupStartFile);
			this->Controls->Add(this->textBoxGroupStartFile);
			this->Controls->Add(this->buttonSelectGroupStartFile);
			this->Controls->Add(this->textBoxGroupTime);
			this->Controls->Add(this->buttonSaveGroup);
			this->Controls->Add(this->labelResultsFile);
			this->Controls->Add(this->buttonStartGroup);
			this->Controls->Add(this->textBoxFifthTime);
			this->Controls->Add(this->textBoxFourthTime);
			this->Controls->Add(this->textBoxFifthNumber);
			this->Controls->Add(this->textBoxFourthNumber);
			this->Controls->Add(this->buttonSaveFifth);
			this->Controls->Add(this->buttonFinishFifth);
			this->Controls->Add(this->buttonSaveFourth);
			this->Controls->Add(this->buttonFinishFourth);
			this->Controls->Add(this->checkBoxFreezeFilePath);
			this->Controls->Add(this->textBoxResultsFile);
			this->Controls->Add(this->buttonSelectResultsFille);
			this->Controls->Add(this->labelTimerFromStart);
			this->Controls->Add(this->textBoxNextNumber);
			this->Controls->Add(this->buttonFinishAll);
			this->Controls->Add(this->buttonSaveThird);
			this->Controls->Add(this->buttonSaveSecond);
			this->Controls->Add(this->buttonSaveFirst);
			this->Controls->Add(this->buttonSaveAllAndEmpty);
			this->Controls->Add(this->buttonSaveAndShift);
			this->Controls->Add(this->labelControlPointTime);
			this->Controls->Add(this->labelStartNumber);
			this->Controls->Add(this->textBoxThirdTime);
			this->Controls->Add(this->textBoxThirdNumber);
			this->Controls->Add(this->textBoxSecondTime);
			this->Controls->Add(this->textBoxSecondNumber);
			this->Controls->Add(this->textBoxFirstTime);
			this->Controls->Add(this->textBoxFirstNumber);
			this->Controls->Add(this->buttonFinishThird);
			this->Controls->Add(this->buttonFinishSecond);
			this->Controls->Add(this->buttonFinishFirst);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Sport Timer (pulse-sports.ru)";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 setFieldCurrentTime(textBoxFirstTime, gcnew String(checkBoxFinishCompetitor->Checked ? "finish" : "nextLap"));;
				 saveBackupFile();
				 setFocusedElement();
			 }
private: System::Void buttonFinishSecond_Click(System::Object^  sender, System::EventArgs^  e) {
				 setFieldCurrentTime(textBoxSecondTime, gcnew String(checkBoxFinishCompetitor->Checked ? "finish" : "nextLap"));;
				 saveBackupFile();
				 setFocusedElement();
		 }
private: System::Void buttonFinishThird_Click(System::Object^  sender, System::EventArgs^  e) {
				 setFieldCurrentTime(textBoxThirdTime, gcnew String(checkBoxFinishCompetitor->Checked ? "finish" : "nextLap"));;
				 saveBackupFile();
				 setFocusedElement();
		 }
private: System::Void buttonFinishFourth_Click(System::Object^  sender, System::EventArgs^  e) {
				 setFieldCurrentTime(textBoxFourthTime, gcnew String(checkBoxFinishCompetitor->Checked ? "finish" : "nextLap"));;
				 saveBackupFile();
				 setFocusedElement();
		 }
private: System::Void buttonFinishFifth_Click(System::Object^  sender, System::EventArgs^  e) {
				 setFieldCurrentTime(textBoxFifthTime, gcnew String(checkBoxFinishCompetitor->Checked ? "finish" : "nextLap"));;
				 saveBackupFile();
				 setFocusedElement();
		 }
		 private: void setFieldCurrentTime(TextBox^ textBox, String^ action) {
					  textBox->Text =  getCurrentTime() + "#" + action;
				  }
private: System::Void buttonFinishAll_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ currentTime = getCurrentTime();
			 if(textBoxFirstTime->Text=="") textBoxFirstTime->Text = currentTime + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 if(textBoxSecondTime->Text=="") textBoxSecondTime->Text = currentTime + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 if(textBoxThirdTime->Text=="") textBoxThirdTime->Text = currentTime + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 if(textBoxFourthTime->Text=="") textBoxFourthTime->Text = currentTime + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 if(textBoxFifthTime->Text=="") textBoxFifthTime->Text = currentTime + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
				 saveBackupFile();
		 }
private: System::Void buttonStartGroup_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxGroupTime->Text = getCurrentTime();
				 saveBackupFile();
		 }
	private: System::Void checkBoxFreezeFilePath_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(checkBoxFreezeFilePath->Checked) {
					 checkBoxUseSummerTimeShifting->Enabled = false;
					 textBoxResultsFile->Enabled = false;
					 textBoxGroupStartFile->Enabled = false;
					 buttonSelectResultsFille->Enabled = false;
					 buttonSelectGroupStartFile->Enabled = false;
					 textBoxMaxLapsNumber->Enabled = false;
				 } else {
					 checkBoxUseSummerTimeShifting->Enabled = true;
					 textBoxResultsFile->Enabled = true;
					 textBoxGroupStartFile->Enabled = true;
					 buttonSelectResultsFille->Enabled = true;
					 buttonSelectGroupStartFile->Enabled = true;
					 textBoxMaxLapsNumber->Enabled = true;
				 }
				 labelFinishAll->Visible = false;
				 updateNumbersOfCrosses();

			 }
private: System::Void buttonSelectResultsFille_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE* resultsFile;
			 SaveFileDialog^ resultFileDialog = gcnew SaveFileDialog();
			 resultFileDialog->RestoreDirectory = true;
			 resultFileDialog->ShowDialog();
			 if(resultFileDialog->FileName!= textBoxGroupStartFile->Text || resultFileDialog->FileName == String::Empty) {
				 if(resultFileDialog->FileName != String::Empty) {
			 textBoxResultsFile->Text = resultFileDialog->FileName;


			 if((resultsFile = fopen(getCharArrayFromString(textBoxResultsFile->Text),"a+"))==NULL) {
				 MessageBox::Show("Unable to open file: \"" + textBoxResultsFile->Text + "\".");
			 } else {
				 fclose(resultsFile);
			 }
				 }
			 } else {
				 MessageBox::Show("Output files for groups and puint must not bee the same!");
			 }
		 }
private: System::Void buttonSelectGroupStartFile_Click(System::Object^  sender, System::EventArgs^  e) {

			 FILE* groupsFile;
			 SaveFileDialog^ groupFileDialog = gcnew SaveFileDialog();
			 groupFileDialog->RestoreDirectory = true;
			 groupFileDialog->ShowDialog();
			 if(groupFileDialog->FileName!= textBoxResultsFile->Text || groupFileDialog->FileName == String::Empty) {
				 if(groupFileDialog->FileName != String::Empty) {
					 textBoxGroupStartFile->Text = groupFileDialog->FileName;
					 if((groupsFile = fopen(getCharArrayFromString(textBoxGroupStartFile->Text),"a+"))==NULL) {
						 MessageBox::Show("Unable to open file: \"" + textBoxGroupStartFile->Text + "\".");
					 } else {
						fclose(groupsFile);
					 }
				 }
			 } else {
				 MessageBox::Show("Output files for groups and results must not bee the same!");
			 }

		 }


private: System::Void buttonSaveFirst_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxFirstNumber->Text!="" || textBoxFirstTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFirstNumber->Text,textBoxFirstTime->Text);
				 if(result){
				 textBoxFirstNumber->Text="";
				 textBoxFirstTime->Text="";
				 }
				 saveBackupFile();
			 }
		 }
private: System::Void buttonSaveSecond_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxSecondNumber->Text!="" || textBoxSecondTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxSecondNumber->Text,textBoxSecondTime->Text);
				 if(result){
				 textBoxSecondNumber->Text="";
				 textBoxSecondTime->Text="";
				 }
	 			 saveBackupFile();
			 }
		 }
private: System::Void buttonSaveThird_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxThirdNumber->Text!="" || textBoxThirdTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxThirdNumber->Text,textBoxThirdTime->Text);
				 if(result){
				 textBoxThirdNumber->Text="";
				 textBoxThirdTime->Text="";
				 }
				 saveBackupFile();
			 }
		 }
private: System::Void buttonSaveFourth_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxFourthNumber->Text!="" || textBoxFourthTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFourthNumber->Text,textBoxFourthTime->Text);
				 if(result){
				 textBoxFourthNumber->Text="";
				 textBoxFourthTime->Text="";
				 }
				 saveBackupFile();
			 }
		 }
private: System::Void buttonSaveFifth_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxFifthNumber->Text!="" || textBoxFifthTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFifthNumber->Text,textBoxFifthTime->Text);
				 if(result){
				 textBoxFifthNumber->Text="";
				 textBoxFifthTime->Text="";
				 }
				 saveBackupFile();
			 }
		 }
		 private: System::Void updateNumbersOfCrosses() {
					  labelCrossesFirst->Text = getNumberOfCrosses(textBoxFirstNumber->Text).ToString();
					  labelCrossesSecond->Text = getNumberOfCrosses(textBoxSecondNumber->Text).ToString();
					  labelCrossesThird->Text = getNumberOfCrosses(textBoxThirdNumber->Text).ToString();
					  labelCrossesFourth->Text = getNumberOfCrosses(textBoxFourthNumber->Text).ToString();
					  labelCrossesFifth->Text = getNumberOfCrosses(textBoxFifthNumber->Text).ToString();
					  int lapsFirst = atoi(getCharArrayFromString(labelCrossesFirst->Text));
					  int lapsSecond = atoi(getCharArrayFromString(labelCrossesSecond->Text));
					  int lapsThird = atoi(getCharArrayFromString(labelCrossesThird->Text));
					  int lapsFourth = atoi(getCharArrayFromString(labelCrossesFourth->Text));
					  int lapsFifth = atoi(getCharArrayFromString(labelCrossesFifth->Text));
					  int maxLaps = atoi(getCharArrayFromString(textBoxMaxLapsNumber->Text));
					  if(lapsFirst >= maxLaps || lapsSecond >= maxLaps || lapsThird >= maxLaps
						  || lapsFourth >=maxLaps || lapsFifth >= maxLaps) {
							  labelFinishAll->Visible = true;
					  }
				  }
		 private: int getNumberOfCrosses(String^ number) {
					  if(number->Equals(String::Empty)) {
						  return 0;
					  }
					  int numberOfCrosses = 0;
					  for each (String^ logString in listBoxActionLog->Items) {
						  if(logString->Substring(0,logString->IndexOf('#'))->Equals(number)) {
							  numberOfCrosses++;
						  }
					  }
					  if(textBoxFirstNumber->Text->Equals(number)) numberOfCrosses++;
					  if(textBoxSecondNumber->Text->Equals(number)) numberOfCrosses++;
					  if(textBoxThirdNumber->Text->Equals(number)) numberOfCrosses++;
					  if(textBoxFourthNumber->Text->Equals(number)) numberOfCrosses++;
					  if(textBoxFifthNumber->Text->Equals(number)) numberOfCrosses++;
					  return numberOfCrosses;
		 }


		 private: System::Void shiftFieldsUp(bool getInfoAboutNextCompetitor, String^ action) {
			String^ currentTime = getCurrentTime();
			 if(textBoxFirstNumber->Text!="" || textBoxFirstTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFirstNumber->Text,textBoxFirstTime->Text);
			 }

			 textBoxFirstNumber->Text=textBoxSecondNumber->Text;
			 textBoxFirstTime->Text=textBoxSecondTime->Text;

			 textBoxSecondNumber->Text=textBoxThirdNumber->Text;
			 textBoxSecondTime->Text=textBoxThirdTime->Text;

			 textBoxThirdNumber->Text=textBoxFourthNumber->Text;
			 textBoxThirdTime->Text=textBoxFourthTime->Text;

			 textBoxFourthNumber->Text=textBoxFifthNumber->Text;
			 textBoxFourthTime->Text=textBoxFifthTime->Text;

			 if(getInfoAboutNextCompetitor) {
				 textBoxFifthNumber->Text=textBoxNextNumber->Text;
				 textBoxFifthTime->Text=currentTime + "#" + action;

				 textBoxNextNumber->Text = String::Empty;
				 setFocusedElement(textBoxNextNumber);
			 } else {
				 textBoxFifthNumber->Text=String::Empty;
				 textBoxFifthTime->Text=String::Empty;
			 }

			 updateNumbersOfCrosses();
				  }
private: System::Void buttonSaveAndShift_Click(System::Object^  sender, System::EventArgs^  e) {
			 shiftFieldsUp(true, checkBoxFinishCompetitor->Checked ? "finish" : "nextLap");
			 saveBackupFile();
		 }
private: System::Void buttonSaveAllAndEmpty_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxFirstNumber->Text!="" || textBoxFirstTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFirstNumber->Text,textBoxFirstTime->Text);
				 if(result){
				 textBoxFirstNumber->Text="";
				 textBoxFirstTime->Text="";
				 }
			 }
			 if(textBoxSecondNumber->Text!="" || textBoxSecondTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxSecondNumber->Text,textBoxSecondTime->Text);
				 if(result){
				 textBoxSecondNumber->Text="";
				 textBoxSecondTime->Text="";
				 }
			 }
			 if(textBoxThirdNumber->Text!="" || textBoxThirdTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxThirdNumber->Text,textBoxThirdTime->Text);
				 if(result){
				 textBoxThirdNumber->Text="";
				 textBoxThirdTime->Text="";
				 }
			 }
			 if(textBoxFourthNumber->Text!="" || textBoxFourthTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFourthNumber->Text,textBoxFourthTime->Text);
				 if(result){
				 textBoxFourthNumber->Text="";
				 textBoxFourthTime->Text="";
				 }
			 }
			 if(textBoxFifthNumber->Text!="" || textBoxFifthTime->Text!="") {
				 bool result = false;
				 result = writeToFinishFile(textBoxFifthNumber->Text,textBoxFifthTime->Text);
				 if(result){
				 textBoxFifthNumber->Text="";
				 textBoxFifthTime->Text="";
				 }
			 }
			 if(checkBoxEnableSecondUser->Checked) {
			 setFocusedElement();
			 } else {
				 setFocusedElement(textBoxNextNumber);
			 }
			 saveBackupFile();
			 updateNumbersOfCrosses();
		 }
private: System::Void buttonSaveGroup_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBoxGroupNumber->Text!="" && textBoxGroupTime->Text!="") {
				 saveBackupFile();
				 if(writeToGroupFile(comboBoxGroupNumber->Text,textBoxGroupTime->Text)) {
					 comboBoxGroupNumber->Items->Remove(comboBoxGroupNumber->Text);
					comboBoxGroupNumber->Text="";
				 }
			 }
		 }
private: inline String^ getCurrentTime() {
			 return getCurrentTime(3);
		 }

private: inline String^ getCurrentTime(int accuracy) {

			 	 struct _timeb timer;
				 _ftime(&timer);
				 Int64 timeZoneTemp = timer.timezone;
				 Int64 dstflagTemp = checkBoxUseSummerTimeShifting->Checked ? timer.dstflag : 0;
				 timer.time = timer.time - timeZoneTemp*60 + dstflagTemp*3600;
				 Int64 seconds = timer.time;
				 seconds %= 60;
				 Int64 minutes = (timer.time) / 60;
				 minutes %= 60;
				 Int64 hours = (timer.time) / 3600;
				 hours %=24;
				 Int64 days = (timer.time)/86400;
				 Int64 milliseconds = fmod(timer.millitm,1.0)*pow(10.0,accuracy);
				 String^ timeString = days.ToString() + gcnew String(" ") + hours.ToString() + gcnew String(":") + minutes.ToString() + gcnew String(":") + seconds.ToString();
				 String^ millisecondsString = timer.millitm.ToString();
					 while (millisecondsString->Length < 3) millisecondsString = gcnew String("0") + millisecondsString;
					 if(accuracy!=0) timeString += (gcnew String(".") + millisecondsString);
				 return timeString;
		 }

		 private: int getMilliseconds() {
			 	 struct _timeb timer;
				 _ftime(&timer);
				 return timer.millitm;
				  }

private: System::Void buttonEmptyAll_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are you sure to empty all fields?","Warning!",MessageBoxButtons::YesNo)==System::Windows::Forms::DialogResult::Yes) {
			 textBoxFirstNumber->Text = "";
			 textBoxFirstTime->Text = "";
			 textBoxSecondNumber->Text = "";
			 textBoxSecondTime->Text = "";
			 textBoxThirdNumber->Text = "";
			 textBoxThirdTime->Text = "";
			 textBoxFourthNumber->Text = "";
			 textBoxFourthTime->Text = "";
			 textBoxFifthNumber->Text = "";
			 textBoxFifthTime->Text = "";
			 textBoxNextNumber->Text = "";
			 }
		 }
private: bool writeToFinishFile(String^ startNumber,String^ finishTime) {
			 FILE* resultsFile;
			 if((resultsFile = fopen(getCharArrayFromString(textBoxResultsFile->Text),"a+"))==NULL) {
				 MessageBox::Show("Unable to open file: \"" + textBoxResultsFile->Text + "\".");
				 updateNumbersOfCrosses();
				 return false;
			 } else {
				 String^ resultString = startNumber + "#" + finishTime + "#";
				 listBoxActionLog->Items->Add(resultString);
				 saveBackupFile();
				 fprintf(resultsFile,getCharArrayFromString(resultString));
				 fprintf(resultsFile, "\n");
				 fclose(resultsFile);
			 }
			 return true;
		 }
		 private: void saveBackupFile() {
		  if(!checkBoxDisableBackup->Checked) {
				 _mkdir("temp");
				String^ resultString;  
				 FILE *backupFile;
			 	 struct _timeb timer;
				 _ftime(&timer);
				 String^ backupFilePath = (gcnew String("temp\\stc")) + timer.time.ToString() + (gcnew String(".txt"));
			 if((backupFile = fopen(getCharArrayFromString(backupFilePath),"w+"))==NULL) {
				 MessageBox::Show("Unable to open file: \""+backupFilePath+"\".");
			 } else {
				 int i;
				 for(i = 0; i<listBoxActionLog->Items->Count; i++) {
					 fprintf(backupFile,"%s",getCharArrayFromString((String^)listBoxActionLog->Items[i]));
					 fprintf(backupFile,"\n");
				 }
				 resultString = comboBoxGroupNumber->Text + "#" + textBoxGroupTime->Text + "#";
				 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
				 fprintf(backupFile, "\n");
				 if(checkBoxFinishCompetitor->Checked) {
					 resultString = textBoxFirstNumber->Text + "#" + textBoxFirstTime->Text + "#finish#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxSecondNumber->Text + "#" + textBoxSecondTime->Text + "#finish#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxThirdNumber->Text + "#" + textBoxThirdTime->Text + "#finish#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxFourthNumber->Text + "#" + textBoxFourthTime->Text + "#finish#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxFifthNumber->Text + "#" + textBoxFifthTime->Text + "#finish#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
				 } else {
					 resultString = textBoxFirstNumber->Text + "#" + textBoxFirstTime->Text + "#nextLap#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxSecondNumber->Text + "#" + textBoxSecondTime->Text + "#nextLap#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxThirdNumber->Text + "#" + textBoxThirdTime->Text + "#nextLap#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxFourthNumber->Text + "#" + textBoxFourthTime->Text + "#nextLap#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
					resultString = textBoxFifthNumber->Text + "#" + textBoxFifthTime->Text + "#nextLap#";
					 fprintf(backupFile,"%s",getCharArrayFromString(resultString));
					fprintf(backupFile, "\n");
				 }
				 fclose(backupFile);
			 }
				 if(listBoxActionLog->Items->Count>=1) {
					 listBoxActionLog->SetSelected(listBoxActionLog->Items->Count-1,true);
				 }
		  }
				  }
private: bool writeToGroupFile(String^ startNumber,String^ startTime) {
			 FILE* groupsFile;
			 if((groupsFile = fopen(getCharArrayFromString(textBoxGroupStartFile->Text),"a+"))==NULL) {
				 MessageBox::Show("Unable to open file: \"" + textBoxGroupStartFile->Text + "\".");
				 return false;
			 } else {
				 String^ resultString = startNumber + "#" + startTime + "#";
				 listBoxActionLog->Items->Add(resultString);
				fprintf(groupsFile, getCharArrayFromString(resultString));
				fprintf(groupsFile, "\n");
				fclose(groupsFile);
				return true;
			 }
		 }

			 private: char* getCharArrayFromString(String^ inputString) {

char* pString = (char*)System::Runtime::InteropServices::Marshal:: StringToHGlobalAnsi(inputString).ToPointer();
return pString;
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if(MessageBox::Show("Are you sure to exit?","Warning!",MessageBoxButtons::YesNo)==System::Windows::Forms::DialogResult::Yes) {
			 } else {
				 e->Cancel = true;
			 }
		 }
private: System::Void buttonDSQ_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxDSQNumber->Text!="") {
				 writeToFinishFile(textBoxDSQNumber->Text,getCurrentTime()+"#DSQ");
				 textBoxDSQNumber->Text="";
			 }
		 }
private: System::Void textBoxNextNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(e->Control) {
					 shiftFieldsUp(true, "nextStage");
				 } else {
					 buttonSaveAndShift_Click(sender,e);
				 }
			 }
			 if(e->KeyCode == Keys::Up) {
				 setFocusedElement(textBoxFifthNumber);
			 }
		 }
private: System::Void textBoxFifthNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxFifthTime->Text==String::Empty && !checkBoxEnableSecondUser->Checked) {
					 if(e->Control) {
						 setFieldCurrentTime(textBoxFifthTime, "nextStage");;
						 saveBackupFile();
					 } else {
						buttonFinishFifth_Click(sender,e);
					 }
					setFocusedElement(textBoxNextNumber);
				 }
				 if(checkBoxEnableSecondUser->Checked) {
				 checkPossibilityToEmptyUpperFields();
				 }
			 }
			 if(e->KeyCode == Keys::Up) {
				 setFocusedElement(textBoxFourthNumber);
			 }
			 if(e->KeyCode == Keys::Down) {
				 setFocusedElement(textBoxNextNumber);
			 }
		 }
private: System::Void textBoxFourthNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxFourthTime->Text==String::Empty && !checkBoxEnableSecondUser->Checked) {
					 if(e->Control) {
						 setFieldCurrentTime(textBoxFourthTime, "nextStage");;
						 saveBackupFile();
					 } else {
						buttonFinishFourth_Click(sender,e);
					 }
				 }
				 setFocusedElement(textBoxFifthNumber);
				 if(checkBoxEnableSecondUser->Checked) {
				 checkPossibilityToEmptyUpperFields();
				 }
			 }
			 if(e->KeyCode == Keys::Up) {
				 setFocusedElement(textBoxThirdNumber);
			 }
			 if(e->KeyCode == Keys::Down) {
				 setFocusedElement(textBoxFifthNumber);
			 }
		 }
private: System::Void textBoxThirdNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxThirdTime->Text==String::Empty && !checkBoxEnableSecondUser->Checked) {
 					 if(e->Control) {
						 setFieldCurrentTime(textBoxThirdTime, "nextStage");;
						 saveBackupFile();
					 } else {
						 buttonFinishThird_Click(sender,e);
					 }
				 }
				 setFocusedElement(textBoxFourthNumber);
				 if(checkBoxEnableSecondUser->Checked) {
				 checkPossibilityToEmptyUpperFields();
				 }
			 }
			 if(e->KeyCode == Keys::Up) {
				 setFocusedElement(textBoxSecondNumber);
			 }
			 if(e->KeyCode == Keys::Down) {
				 setFocusedElement(textBoxFourthNumber);
			 }
		 }
private: System::Void textBoxSecondNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxSecondTime->Text==String::Empty && !checkBoxEnableSecondUser->Checked) {
					 if(e->Control) {
						 setFieldCurrentTime(textBoxSecondTime, "nextStage");;
						 saveBackupFile();
					 } else {
						 buttonFinishSecond_Click(sender,e);
					 }
				 }
				 setFocusedElement(textBoxThirdNumber);
				 if(checkBoxEnableSecondUser->Checked) {
				 checkPossibilityToEmptyUpperFields();
				 }
			 }
			 if(e->KeyCode == Keys::Up) {
				 setFocusedElement(textBoxFirstNumber);
			 }
			 if(e->KeyCode == Keys::Down) {
				 setFocusedElement(textBoxThirdNumber);
			 }
		 }
private: System::Void textBoxFirstNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxFirstTime->Text==String::Empty && !checkBoxEnableSecondUser->Checked) {
					 if(e->Control) {
						 setFieldCurrentTime(textBoxFirstTime, "nextStage");;
						 saveBackupFile();
					 } else {
						 button1_Click(sender,e);
					 }
				 }
				 setFocusedElement(textBoxSecondNumber);
				 if(checkBoxEnableSecondUser->Checked) {
				 checkPossibilityToEmptyUpperFields();
				 }
			 }
			 if(e->KeyCode == Keys::Down) {
				 setFocusedElement(textBoxSecondNumber);
			 }
		 }
private: System::Void textBoxGroupNumber_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter) {
				 if(textBoxGroupTime->Text==String::Empty) {
					 buttonStartGroup_Click(sender,e);
				 } else {
					 buttonSaveGroup_Click(sender,e);
				 }
			 }
		 }
private: System::Void timerLableRefresher_Tick(System::Object^  sender, System::EventArgs^  e) {
			 static bool showTime = false;
			 if(showTime) {
				 labelTimerFromStart->Text = getCurrentTime(0);
			 } else {
				 double deliminer = 1.0;
				 if(getMilliseconds() == 0)
				 {
					 timerLableRefresher->Interval = 1000;
					 showTime = true;
				 }
			 }
		 }
		 private: System::Void loadConfig(String^ filePath) {
				 FILE* openGroupsList;
				 if((openGroupsList = fopen(getCharArrayFromString(filePath),"r+"))==NULL) {
					 MessageBox::Show("Unable to open file: \"" + filePath + "\".");
				 } else {
					 char* tempString = new char[numberOfCharsInString];
					 comboBoxGroupNumber->Items->Clear();
					 int loadStringResult = readStringFromFile(openGroupsList, tempString);
					 while (loadStringResult!=EOF) {
						 if(strcmp(tempString, "configFiles")==0) {
							 loadStringResult = readStringFromFile(openGroupsList, tempString);
							 if(loadStringResult==EOF) {
								 break;
							 } else {
								 textBoxResultsFile->Text = gcnew String(tempString);
							 }
							 loadStringResult = readStringFromFile(openGroupsList, tempString);
							 if(loadStringResult==EOF) {
								 break;
							 } else {
								 textBoxGroupStartFile->Text = gcnew String(tempString);
							 }
							 break;
						 } else {
							 comboBoxGroupNumber->Items->Add(gcnew String(tempString));
						 }
						 loadStringResult = readStringFromFile(openGroupsList, tempString);
					 }
					 fclose(openGroupsList);
				 }

				  }
private: System::Void buttonLoadGroupsList_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->RestoreDirectory = true;
			 openFileDialog->ShowDialog();
			 if(openFileDialog->FileName != String::Empty) {
				 loadConfig(openFileDialog->FileName);
			 }
		 }
				  public: int readStringFromFile(FILE* fileFrom, char* stringTo) {
					  char tempChar;
					  int fscanfResult;
					  for(int i = 0;i<numberOfCharsInString;i++) {
						  fscanfResult = fscanf(fileFrom,"%c", &tempChar);
						  if(fscanfResult == EOF) {
							  if(i==0) {
								return EOF;
							  } else {
								  stringTo[i] = 0;
								  return 0;
							  }
						  }
						  if(tempChar == '\n') {
								  stringTo[i] = 0;
								  return 0;
						  }
						  stringTo[i] = tempChar;
						  }
					  return EOF;
				  }



private: System::Void buttonFinishButtonForSecondUser_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBoxFirstTime->Text==String::Empty) {
				 textBoxFirstTime->Text = getCurrentTime() + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 } else if (textBoxSecondTime->Text==String::Empty) {
				 textBoxSecondTime->Text = getCurrentTime() + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 } else if (textBoxThirdTime->Text==String::Empty) {
				 textBoxThirdTime->Text = getCurrentTime() + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 } else if (textBoxFourthTime->Text==String::Empty) {
				 textBoxFourthTime->Text = getCurrentTime() + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 } else if (textBoxFifthTime->Text==String::Empty) {
				 textBoxFifthTime->Text = getCurrentTime() + (checkBoxFinishCompetitor->Checked ? "#finish" : "#nextLap");
			 } else {
				 shiftFieldsUp(true, checkBoxFinishCompetitor->Checked ? "finish" : "nextLap");
			 }
			 checkPossibilityToEmptyUpperFields();
			 try {
			 setFocusedElement();
			 } catch (Object^ obj) {
			 }
			 saveBackupFile();

		 }
private: bool checkPossibilityToEmptyUpperFields() {
			 if(textBoxFirstNumber!=focusedControl && textBoxFirstTime->Text!=String::Empty) {
				 shiftFieldsUp(false, checkBoxFinishCompetitor->Checked ? "finish" : "nextLap");
				 if(focusedControl==textBoxSecondNumber) {
					 focusedControl = textBoxFirstNumber; 
				 } else if(focusedControl==textBoxThirdNumber) {
					 focusedControl = textBoxSecondNumber; 
				 } else if(focusedControl==textBoxFourthNumber) {
					 focusedControl = textBoxThirdNumber; 
				 } else if(focusedControl==textBoxFifthNumber) {
					 focusedControl = textBoxFourthNumber; 
				 } else {
					 focusedControl = textBoxFirstNumber;
				 }
				 setFocusedElement();
				 ((TextBox^)focusedControl)->Select(focusedControl->Text->Length,0);
				 return true;
			 } else {
//				 focusedControl = textBoxFirstNumber;
			 try {
				 setFocusedElement();
			 } catch (Object^ obj) {
			 }
				 return false;
			 }
		 
		 }
private: System::Void textBoxFirstNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxFirstNumber;
		 }
private: System::Void textBoxSecondNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxSecondNumber;
		 }
private: System::Void textBoxThirdNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxThirdNumber;
		 }
private: System::Void textBoxFourthNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxFourthNumber;
		 }
private: System::Void textBoxFifthNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxFifthNumber;
		 }
private: System::Void checkBoxEnableSecondUser_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBoxEnableSecondUser->Checked) {
				 buttonFinishButtonForSecondUser->Enabled = true;
			 } else {
				 buttonFinishButtonForSecondUser->Enabled = false;
			 }
		 }

		 private: void setFocusedElement() {
			 try {
				 focusedControl->Focus();
				 ((TextBox^)focusedControl)->Select(focusedControl->Text->Length,0);
			 }catch (Object^ myObj) {
			 }
		 }

		 private: void setFocusedElement(TextBox^ textBoxToFocus) {
			 try {
				 textBoxToFocus->Focus();
				 textBoxToFocus->Select(textBoxToFocus->Text->Length,0);
			 }catch (Object^ myObj) {
			 }
		 }

private: System::Void textBoxNextNumber_Enter(System::Object^  sender, System::EventArgs^  e) {
			 focusedControl = textBoxNextNumber;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 loadConfig(gcnew String("data//groupsList.txt"));
		 }
};
}

