# include <iostream>
# include <fstream>
# include <string>
using namespace std;
void main_page();
void Get_Student_Data();
void Input_Data();
void academic_details(string fileName,ofstream& wr)
{
    char student_data[4000];
    string temp;
    getline(cin,temp);

    cout<<"\tEnter The Name Of Student : ";
	cin.getline(student_data,4000);
	wr<<"\n\t~~~~~~~~~~~ACADEMIC DETAILS~~~~~~~~~~~~\n";
    wr<<"\n\tNAME : "<<student_data<<endl;

    cout<<"\tEnter The Marks Secured In Inter : ";
    cin.getline(student_data, 4000);
    wr<<"\tINTER MARKS : "<<student_data<<endl;

    cout<<"\tEnter The Rank Secured In EAPCET : ";
    cin.getline(student_data, 4000);
    wr<<"\tEAPCET RANK : "<<student_data<<endl;

    cout<<"\tEnter The Rank Secured In SRM JEE  ENTRANCE EXAM  : ";
    cin.getline(student_data, 4000);
    wr<<"\tJEE MAINS RANK : "<<student_data<<endl;

    cout<<"\tEnter The Percentage Of 10th Class : ";
    cin.getline(student_data, 4000);
    wr<<"\t10th PERCENTAGE : "<<student_data<<endl;
}
void personal_info(string fileName,ofstream& wr)
{
   char student_data[4000];
   string temp;
   getline(cin,temp);

   cout<<"\n\tEnter The Name Of Student : ";
   cin.getline(student_data,4000);
   wr<<"\n\t~~~~~~~~~~~~PERSONAL INFORMATION~~~~~~~~~~~~~~\n";
   wr<<"\n\tNAME : "<<student_data<<endl;

   cout<<"\tEnter The Father Name : ";
   cin.getline(student_data, 4000);
   wr<<"\tFATHER NAME : "<<student_data<<endl;

    cout<<"\tEnter Aadhar Number Of Student : ";
	cin.getline(student_data, 4000);
    wr<<"\tADDRESS : "<<student_data<<endl;

    cout<<"\tEnter the date of birth : ";
	cin.getline(student_data, 4000);
    wr<<"\tDOB:"<<student_data<<endl;

    cout<<"\tEnter the blood group  : ";
	cin.getline(student_data, 4000);
    wr<<"\tBLOOD GROUP :"<<student_data<<endl;

    cout<<"\tEnter the email address : ";
	cin.getline(student_data, 4000);
    wr<<"\tE-MAIL ID :"<<student_data<<endl;

    cout<<"\tEnter Contact No : ";
	cin.getline(student_data, 4000);
    wr<<"\tCONTACT NUMBER : "<<student_data<<endl;

    cout<<"\tEnter Address : ";
	cin.getline(student_data, 4000);
    wr<<"\tADDRESS : "<<student_data<<endl;

}
void course_details(string fileName,ofstream& wr)
{
   char student_data[4000];
   string temp;
   getline(cin,temp);
   courses:
       int select;
       wr<<"\n\t~~~~~~~~~~~~~COURSE DETAILS~~~~~~~~~~~~~~~\n\n";
   cout<<"\n\tIn Which Stream Are You Interested To Join\n\t  1.SCHOOL OF ENGINEERING AND SCIENCES\n\t  2.SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n\t  3.PHD\n";
   cout<<"\n\tSelect The Stream : ";
   cin>>select;
   if(select==1)
   {
   cout<<"\n\tYou Have Selected The SCHOOL OF ENGINEERING AND SCIENCES";
   selectors:
   cout<<"\n\n\tCouses Offered : \n  ";
   cout<<"\t  1.COMPUTER SCIENCE ENGINEERING\n\t  2.ELECTRONICS AND COMMUNICATION ENGINEERING\n\t  3.MECHANICAL ENGINEERING\n\t  4.ELECTRICAL AND ELECTRONICS ENGINEERING\n\t  5.CIVIL ENGINEERING\n";
   int choice;
   cout<<"\n\tChoose The Course : ";
   cin>>choice;
   if(choice==1)
   {
     cout<<"\n";
     cout<<"\n\tYou Have Selected CSE Department"<<endl;
     cout<<"\tSpecialisations Offered In CSE Department:\n\t  1.CYBER SECURITY\n\t  2.AIML\n\t  3.IOT\n\t  4.ML\n\t  5.DATA SCIENCES\n";
     cout<<"\n\tYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";

    wr<<"\tDepartment : CSE"<<endl;
    cin.getline(student_data,4000);
    cout<<"\n\tIn Which Specialisation Course You Are Interested In :";
    cin.getline(student_data,4000);
    wr<<"\tSpecialisation : "<<student_data<<endl;

    cout<<"\tIn Which You Are Interested In:\n\t  1.Campus Placements\n\t  2.Higher Education\n\tInterested In : ";
    cin.getline(student_data,4000);
    wr<<"\tInterested In : "<<student_data<<endl;
    wr<<"\tDuration Of The Course : 4 Years"<<endl;
   }
   else if(choice==2)
   {
    cout<<"\n";
    cout<<"\tYou Have Selected ECE Department "<<endl;
    wr<<"\tDepartment : ECE"<<endl;

    cout<<"\n\tSpecialisations Offered In ECE Department:\n\t  1.Digital Signal Processing\n\t  2.Communication Systems\n\t  3.Embedded System\n\t  4.Robotics and Automation\n";
    cout<<"\n\tYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\tIn Which Specialisation Course You Are Interested In :";
    cin.getline(student_data,4000);

    wr<<"\tSpecialisation : "<<student_data<<endl;
    cout<<"\n\tIn Which You Are Interested In\n\t  1.Campus Placements\n\t  2.Higher Education\n\tInterested In : ";
    cin.getline(student_data,4000);
    wr<<"\tInterested In : "<<student_data<<endl;
   wr<<"\tDuration Of The Course : 4 Years"<<endl;
   }
   else if(choice==3)
   {
    cout<<"\n\tYou Have Selected ME Department "<<endl;
    wr<<"\tDepartment : ME"<<endl;

    cout<<"\tSpecialisations Offered In ME Department:\n\n\t  1.Controls and robotics\n\t  2.Fluid mechanics and thermal systems\n\t  3.Mechanics of materials\n\t  4.Automotive design\n\t  5.Machine design and development\n\n";
    cout<<"\n\tYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\n\tIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"\tSpecialisation : "<<student_data<<endl;

    cout<<"\tIn Which Are You Interested In :\n\t  1.Campus Placements \n\t  2.Higher Education \n\tInterested In : ";
    cin.getline(student_data,4000);
    wr<<"\tInterested In : "<<student_data<<endl;
    wr<<"\tDuration Of The Course : 4 Years"<<endl;
   }
   else if(choice==4)
   {
    cout<<"\n\n\tYou Have Selected EEE Department "<<endl;
    wr<<"\tDepartment : EEE"<<endl;
    wr<<"\tDuration Of The Course : 4 Years\n";

    cout<<"\n\tSpecialisations Offered In EEE Department:\n\n\t  1.Embedded Systems\n\t  2.Intelligent Systems\n\t  3.Robotics and Power Electronics\n\t  4.Networking\n";
    cout<<"\n\tYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\n\tIn Which Specialisation Course Are You Interested In : ";
    cin.getline(student_data,4000);
    wr<<"\tSpecialisation : "<<student_data<<endl;

   cout<<"\tIn Which You Are Interested In : \n\t  1.Campus Placements\n\t  2.Higher Education\n\tInterested In : ";
    cin.getline(student_data,4000);
    wr<<"\tInterested In : "<<student_data<<endl;
   }
   else if(choice==5)
   {
    cout<<"\n\n\tYou Have Selected CIVIL Department "<<endl;
    wr<<"\tDepartment : CIVIL"<<endl;
    wr<<"\tDuration Of The Course : 4 Years\n";

    cout<<"\t\nSpecialisations Offered In CIVIL Department:\n\t  1.Structural engineering\n\t  2.Construction engineering and management\n\t  3.Geotechnical engineering\n\t  4.Transportation engineering\n\n";
    cout<<"\tYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\n\tIn Which Specialisation Course You Are Interested In : ";
    cin.getline(student_data,4000);
    wr<<"\tSpecialisation : "<<student_data<<endl;

    cout<<"In Which You Are Interested In :\n\t  1.Campus Placements\n\t  2.Higher Education\nInterested In : ";
    cin.getline(student_data,4000);
    wr<<"\tInterested In : "<<student_data<<endl;
   }
   else
    {
        cout<<"\n\tWrong Course Selected! Pls Reselect The course\n";
        goto selectors;
    }
   }
   else if(select==2)
   {
    cout<<"\n\tYou Have Selected SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n";
    constructors:
   cout<<"\n\tCouses Offered In The SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n  ";
   cout<<"\t  1.BA\n\t  2.BSC\n\t  3.BCOM\n";
   cout<<"\tSelect The Course : ";
   string select_2;
   cin>>select_2;
    if(select_2=="BA")
    {
        cout<<"\n\tYou Have Selected BA Course  "<<endl;
    wr<<"\tCourse : BA"<<endl;

    wr<<"\tDuration Of The Course : 4 Years\n";
    cin.getline(student_data,4000);
    cout<<"\n\tSubjects Offered In BA Department:\n\t  1.English\n\t  2.History\n\t  3.Liberal Arts\n";
    cout<<"\n\tSubject You Are Interested In : ";
    cin.getline(student_data,4000);
    wr<<"\tSubject : "<<student_data<<endl;

    }
    else if(select_2=="BSC")
    {
        cout<<"\n\tYou Have Selected BSC Course  "<<endl;
    wr<<"\tCourse : BSC"<<endl;

    wr<<"\tDuration Of The Course : 3 Years\n";
    cin.getline(student_data,4000);
    cout<<"\n\tSubjects Offered In BSC Department:\n\t  1.Psychology\n\t  2.Economics\n";
    cout<<"\n\tSubject You Are Interested In : ";
    cin.getline(student_data,4000);
    wr<<"\tSubject : "<<student_data<<endl;
    }
    else if(select_2=="BCOM")
    {
        cout<<"\n\n\tYou Have Selected BCOM Course  "<<endl;
    wr<<"\tCourse : BCOM"<<endl;

     wr<<"\tDuration Of The Course : 3 Years\n";
    cin.getline(student_data,4000);
    cout<<"\n\tSpecialisations Offered In BCOM Department:\n\t  1.Bcom Accounts and Finance\n\t  2.BCom in Economics\n\t  3.BCom in Investment Management\n\t  4.BCom in Taxation\n\t  5.BCom in Financial Market\n";
    cin.getline(student_data,4000);
    cout<<"\n\tIn Which Specialisation Course Are You Interested In : ";
    cin.getline(student_data,4000);
    wr<<"\tSpecialisation : "<<student_data<<endl;

    }
    else
    {
        cout<<"\n\tYou Have Selected The Course Which Is Not Available! Pls Reselect The Course\n";
        goto constructors;
    }
   }
   else if(select==3)
   {
       cout<<"\n\n\tYou Have Selected For A PHD Admission\n";
       wr<<"\tCourse : PHD"<<endl;
       cin.getline(student_data,4000);
       cout<<"\tSpecialisations Offered In PHD :\n\t  1.Phd in Science\n\t  2.phd in Commerce\n\t  3.phd in Humanities\n\t  4.phd in Business Management\n\t  5.phd in Engineering and technology\n";
       //cin.getline(student_data,4000);
       cout<<"\n\tIn Which Specialisation Course Are You Interested In : ";
       cin.getline(student_data,4000);
      wr<<"\tSpecialisation : "<<student_data<<endl;
   }
   else{
     cout<<"\n\tYou Have Selected The Course Which Is Not Available! Pls Reselect The Course\n";
        goto courses;
   }

   cout<<"\n\n\t-------------YOUR DETAILS ARE SUCCESFULLY UPLOADED PLEASE WAIT UNTIL UNIVERSITY RESPONDS--------------\n";

}
void main_page()
{
    cout<<"\n\n";
    while(1)
   {
   cout<<"                       &&           &            @               @                            "<<endl;
   cout<<"                      &  &          & &        &    &&&&& &&&&&     &&&&&&  &     &           "<<endl;
   cout<<"                     &    &         & &&      && &  &     &      &  &    &  & &   &           "<<endl;
   cout<<"                    &&&&&&&&   &&&&&& & &    & & &  &&&&& &&&&&  &  &    &  &  &  &           "<<endl;
   cout<<"                   &        &  &    & &  &  &  & &      &     &  &  &    &  &   & &           "<<endl;
   cout<<"                  &          & &&&&&& &    &   & &  &&&&& &&&&&  &  &&&&&&  &    &&           "<<endl<<endl<<endl;

   cout<<"                       &&&&&&&                                                                 "<<endl;
   cout<<"                       &         &    &  &&&&&& &&&&&&&&& &&&&&&&  &         &                 "<<endl;
   cout<<"                       &          &  &   &          &     &        & &     & &                 "<<endl;
   cout<<"                       &&&&&&&      &    &&&&&&     &     &&&&&&&  &  &   &  &                 "<<endl;
   cout<<"                             &     &          &     &     &        &   & &   &                 "<<endl;
   cout<<"                       &&&&&&&    &      &&&&&&     &     &&&&&&&  &    &    &                 "<<endl<<endl;
   string select;
   string fileName;
    cout<<"\n\tWHO YOU ARE : \n \t  1.student\n \t  2.staff\n\t  3.exit\n\tEnter : ";
    cin>>select;
    if(select=="Student" || select=="student")
    {

        Input_Data();
	}
	else if(select=="Staff" || select=="staff")
	{
	    cout<<"\n\tTO GET INFORMATION OF THE STUDENT\n ";
		Get_Student_Data();
	}
    else if(select=="Exit" || select=="exit")
    {
    	exit(0);
	}
	else
    {
       cout<<"PLEASE CHOOSE THE CORRECT OPTION...!\n\n";
    }
   }
}
int main()
{
    main_page();
    return 0;
}

void Input_Data()
{
   char student_data[4000];
   string  fileName,temp;
   getline(cin,temp);
   cout<<"";
   cout<<"\tEnter Student Application Number#=";
   getline(cin,fileName);
   ofstream wr(fileName.c_str());
   cout<<"\n\tApplication Number#"<<fileName<<endl;
   while(1)
   {
       int num;
       cout<<"\n\t----------ENTER THE DETAILS REQUIRED FOR THE ADMISSION PROCESS----------\n";
       cout<<"\n\tSELECT THE FOLLOWING OPTIONS TO ENTER DETAILS\n\t  1.Academic Qualifications\n\t  2.Personal Information\n\t  3.Details Of The Course\n\t  4.Go To Main Page\n";
       cout<<"\tChoose The Option To Enter : ";
       cin>>num;
       switch (num)
       {
       case 1:
       cout<<"\n\t----------ACADEMIC DETAILS OF THE STUDENT-------------\n";
       academic_details(fileName,wr);
       cout<<"\n\tEnter The Personal Details Of The Student\n";
        break;
       case 2:
       cout<<"\n\t----------PERSONAL DETAILS OF THE STUDENT-------------\n";
            personal_info(fileName,wr);
            cout<<"\n\tEnter The Details Of The Course\n";
        break;
       case 3:
       cout<<"\n\t----------COURSE DETAILS OF THE STUDENT---------------\n";
           course_details(fileName,wr);
           cout<<"\n\tAFTER SUCCESSFUL COMPLITION OF ENTERING DETAILS, GO TO MAIN PAGE\n";
        break;
       case 4:
           cout<<"\n\t\t\t---------------------------Going to main page----------------------------\n";
           main_page();
           break;
       default:
        cout<<"Enter your choice correctly\n ";
       }
   }

}

void Get_Student_Data()
{
	ifstream rd;
	ofstream wr;
	string lines;
	string fileName,temp;
    getline(cin,temp);
    cout<<""<<endl;
   		cout<<"\tEnter Student Application Number#=";
        getline(cin,fileName);
        cout<<"\tVerifing The Student Details";
   rd.open(fileName.c_str());
	if(rd.is_open())
	{
		while (getline(rd,lines))
		{
			cout<<lines<<endl;
		}
		cout<<"\n\t-------------UPLOADED THE STUDENT DETAILS--------------\n";
        int rankk;
        string course;
        cout<<"\n\tEnter The Rank Of The Student In SRM JEE Entrance Exam : ";
        cin>>rankk;
        cout<<"\n\tEnter The Course Opted By The Student : ";
        cin>>course;
        cout<<"\tAs Student Secured Rank Of "<<rankk<<" And Opted For The Course "<<course<<endl;

        cout<<"\n\t------------COMMENTS TO THE STUDENT FOR HIS PERFORMANCE--------------\n";
       if(rankk < 500)
        {
            cout<<"\n\tHeartly Congratulaions,From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\tDear Student, We Have Uploaded The Academic Details And Personal Information From Your Application Form.\n\tYour Performance In The Entrance Exam Is Very Good.\n";
            cout<<"\n\tYOUR FEE STRUCTURE WILL BE SHARED AS SOON AS POSSIBLE.\n\tPLEASE WAIT UNTIL UNIVERSITY RESPONDS\n\tThanks and Regards,\n\tSRM UNIVERSITY.\n";
        }
        else if(rankk<1000)
        {
            cout<<"\n\tHeartly Congratulaions,From SRM UNIVERSITY ANDHRA PRADESH,";
            cout<<"\n\tDear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.\n\tYour Performance In Our SRM JEE ENTRANCE EXAMINATION is Good.\n\tYou Can Join Our SRM Family By Admitting In Our University\n\n";
            cout<<"\tYOUR FEE STRUCTURE WILL BE SHARED AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.\n\tPLEASE WAIT UNTIL UNIVERSITY RESPONDS.\n\tThanks and Regards,\n\tSRM UNIVERSITY.\n";
        }
        else if(rankk<1500)
        {
            cout<<"\n\tCongratulaions,From SRM UNIVERSITY ANDHRA PRADESH,";
            cout<<"\n\tDear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.\n\tAs You Have Secured A Rank Of Below 1500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join Our SRM Family By Admitting In Our University.\n\n";
            cout<<"\tYOUR FEE STRUCTURE WILL BE SHARED AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.\n\tPLEASE WAIT UNTIL UNIVERSITY RESPONDS\n\tThanks and Regards,\n\tSRM UNIVERSITY.\n";
        }
        else if(rankk>1500 && rankk<=2500 )
        {
            cout<<"\n\tCongratulaions,From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\tDear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.\n\tAs You Have Secured A Rank Of Above 1500 And Below 2500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join Our\n\tSRM University For The Course You Have Selected With Extra 10% FEES THAN THE ORIGINAL FEE AS DONATION. \n\n";
            cout<<"\tYOUR FEE STRUCTURE WILL BE SHARED AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.\n\tPLEASE WAIT UNTIL UNIVERSITY RESPONDS\n\tThanks and Regards,\n\tSRM UNIVERSITY.\n";

        }
        else if(rankk>2500)
        {
            cout<<"\n\tCongratulaions,From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\tDear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.\n\tAs You Have Secured A Rank Of Above 2500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join In Our \n\tUniversity For The Course You Have Selected With Extra 25% FEES THAN THE ORIGINAL FEE AS DONATION \n\n";
            cout<<"\tYOUR FEE STRUCTURE WILL SHARED AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\n\tThanks and Regards,\n\tSRM UNIVERSITY.\n";
        }

        //fee structure:
        cout<<"\n\n\t--------------FEE STRUCTURE---------------\n";
        cout<<"\n\tNOTE : Dear Student,\n\t\t  FEE STRUCTURE IS PURELY BASED ON THE PERFORMANCE IN YOUR SRM JEE ENTRANCE EXAMINATION.\n";
        cout<<"\n";
        if(course=="CSE"||course=="ECE"||course=="ME"||course=="EEE"||course=="CIVIL"||course=="cse"||course=="ece"||course=="me"||course=="eee"||course=="civil")
        {
            int fees=200000;
            if(rankk<=1500)
            {
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees=fees+((fees*10)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees<<endl;
            }
            else if(rankk>2500)
            {
                fees=fees+((fees*25)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees<<endl;
            }
        }
        else if(course=="BA"||course=="BSC"||course=="BCOM"||course=="ba"||course=="bsc"||course=="bcom")
        {
            int fees_A=175000;
            if(rankk<=1500)
            {
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_A<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees_A=fees_A+((fees_A*10)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_A<<endl;
            }
            else if(rankk>2500)
            {
                fees_A=fees_A+((fees_A*25)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_A<<endl;
            }
        }
        else if(course=="PHD"||course=="phd")
        {
            int fees_p=150000;
            if(rankk<=1500)
            {
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_p<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees_p=fees_p+((fees_p*10)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_p<<endl;
            }
            else if(rankk>2500)
            {
                fees_p=fees_p+((fees_p*25)/100);
                cout<<"\n\tACADEMIC FEES OF THE STUDENT : "<<fees_p<<endl;
            }
        }
        string ok;
        cout<<"\n\n\tIF YOU ARE OK WITH THE ACADEMIC FEES ENTER OK, OR ENTER NOT OK FOR YOUR DISAPPROVAL TO CANCEL YOUR ADMISSION : ";
        cin>>ok;
        if(ok=="OK"||ok=="ok" || ok=="Ok")
        {
            cout<<"\n\n\t\t-------------------------------------YOUR ADMISSION IS SUCCESSFULL-------------------------------------------\n\n\n";
        }
        else
        {
            cout<<"\n\tAS YOU HAVE AN ISSUE IN FEE STRUCTURE\n";
            cout<<"\n\t\t-------------------------------------YOUR ADMISSION IS CANCELLED----------------------------------------\n\n\n";
        }
	 }
	 rd.close();
}