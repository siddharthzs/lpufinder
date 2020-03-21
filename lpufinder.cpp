#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
using namespace std;

class section {
public:
	void add_data()
	{
		cout << "Write the name of the section: ";
		cin >> className;
		cout << "Name of the Section Mentor: ";
		cin >> sectionMentor;
		cout << "Name of the Section HOD: ";
		cin >> sectionHod;
		cout << "Name of the Course Coordinator: ";
		cin >> courseCoordinator;
		cout << "Name of the Placement Mentor: ";
		cin >> placementMentor;
		cout << "Name of the Class Representaive: ";
		cin >> classRepresentive;
		cout << "Name of the E-Cell Coordinator: ";
		cin >> ecellCoordinator;
		cout << "Name of the PlacementCoordinator: ";
		cin >> placementCoordinator;
		cout << "------------------------------------------------------------------------------" << endl;
	}

	void display_data()
	{
		cout << "Class Name: " << className << endl;
		cout << "Section Mentor is : " << sectionMentor << endl;
		cout << "Section HOD is : " << sectionHod << endl;
		cout << "Course Coordinator is : " << courseCoordinator << endl;
		cout << "Placement Mentor is : " << placementMentor << endl;
		cout << "Class Representative is : " << classRepresentive << endl;
		cout << "E-Cell Coordinator is : " << ecellCoordinator << endl;
		cout << "PlacementCoordinator is : " << placementCoordinator << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
	}

	string className, sectionMentor, sectionHod, courseCoordinator, placementMentor, classRepresentive, ecellCoordinator, placementCoordinator;


}k17;



class view : public section
{
    public:
	dclassName()
	{
	    ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.className = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
	}
    dsectionMentor()
    {
       ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.sectionMentor = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }

    dsectionHod()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.sectionHod = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }

    dcourseCoordinator()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.courseCoordinator = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }

    dplaceMentor()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.placementMentor = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }

    dclassRepresentive()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.classRepresentive = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }
    decellCoordinator()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.ecellCoordinator = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }

    dplacementCoordinator()
    {
        ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   k17.placementCoordinator = "NULL";
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
    }





    void eclassName(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the class"<<endl;
        cin>>k17.className;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
    }
    void esectionMentor(int num)
    {
         int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the Mentor"<<endl;
        cin>>k17.sectionMentor;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
    }
    void esectionHod(int num)
    {
    int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the HOD"<<endl;
        cin>>k17.sectionHod;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
    }
    void ecourseCoordinator(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the course Coordinator"<<endl;
        cin>>k17.courseCoordinator;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
        }
    void eplaceMentor(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the placement Mentor"<<endl;
        cin>>k17.placementMentor;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
        }
    void eclassRepresentive(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the class Representative"<<endl;
        cin>>k17.classRepresentive;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));
        }
    void eecellCoordinator(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the E-cell Coordinator"<<endl;
        cin>>k17.ecellCoordinator;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));

    }
    void eplacementCoordinator(int num)
    {
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekg(location);
        file.read((char*)&k17,sizeof(k17));
        cout<<"enter the new name of the Placement Coordinator"<<endl;
        cin>>k17.placementCoordinator;
        file.seekp(location);
        file.write((char*)&k17,sizeof(k17));

    }


    ssectionName(string name)
    {
	    int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.className == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<----------------------No,Such section!---------------------->"<<endl;
        }
		file.close();
	}
    ssectionMentor(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.sectionMentor == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<---------------No,Such section Mentor!------------------>"<<endl;
        }
		file.close();
    }
    ssectionHod(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.sectionHod == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<-----------------No,Such section HOD!----------------->"<<endl;
        }
		file.close();
    }
    scourseCoordinator(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.courseCoordinator == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<----------------------No,Such course Coordinator!--------------------->"<<endl;
        }
		file.close();
    }
    splaceMentor(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.placementMentor == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<------------------No,Such placement Mentor!-------------------->"<<endl;
        }
		file.close();
    }
    sclassRepresentive(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.classRepresentive== name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<------------------No,Such Class Representative!---------------->"<<endl;
        }
		file.close();
    }
    secellCoordinator(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.ecellCoordinator == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<-----------------No,Such E-cell Coordinator!---------------------->"<<endl;
        }
		file.close();
    }
    splacementCoordinator(string name)
    {
        int c = 0;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
		{
			if (k17.placementCoordinator == name)
			{
			    cout<<"<-------------SUCEESFULLY FOUNDED--------------->\n\n";
				k17.display_data();
				c++;
				break;
			}
		}
		if(c == 0)
        {
            cout<<"<------------No,Such Placement Coordinator!------------->\n"<<endl;
        }
		file.close();
    }


     void onlySectionName()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.className<<endl;
        file.close();
	}
	 void onlyplacementCoordinator()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.placementCoordinator<<endl;
        file.close();
	}
	onlyecellCoordinator()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.ecellCoordinator<<endl;
        file.close();
	}
	onlyclassRepresentive()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.classRepresentive<<endl;
        file.close();
	}
	onlyplaceMentor()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.placementMentor<<endl;
        file.close();
	}
	onlycourseCoordinator()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.courseCoordinator<<endl;
        file.close();
	}
	onlysectionHod()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.sectionHod<<endl;
        file.close();
	}
	onlysectionMentor()
	{
	    ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			cout<<":-  "<<k17.sectionMentor<<endl;
        file.close();
	}



	}listy;







class Master :public view ,public section{
public:
	void addSection(int n = 1)
	{
		for (int i = 0; i < n; i++)
		{
			k17.add_data();
			fstream file;
			file.open("lpufinder12.txt", ios::app);
			file.write((char*)&k17, sizeof(k17));
			file.close();
		}
	}
	void viewSection()
	{   int i = 1;
		cout << "THE DETAILS ARE:-" << endl;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
        {cout<<i<<": ";
			k17.display_data();
			i++;}
		file.close();
	}

	void viewSectionSpecific()
	{   string num2;
	    cout << "TYPE THE NAME OF THE SECTION:-" << endl;
		listy.onlySectionName();
		cin>>num2;
		ifstream file;
		file.open("lpufinder12.txt", ios::in);
		while (file.read((char*)&k17, sizeof(k17)))
			{
			    if(k17.className == num2)
                    {k17.display_data();
                    num2 = "0";}
			}
			if(num2 != "0")
            {
                cout<<"no such class:";
            }
		file.close();

	}
	void viewPosition()
	{   int num;
	    cout<<"Choose the Position of to View of All Sections\n\n";
	    cout<<"[1] className\t\t\t[2] sectionMentor\t\t[3] sectionHod\n[4] courseCoordinator\t\t[5] placementMentor\t\t[6] classRepresentive\n[7] ecellCoordinator\t\t[8] placementCoordinator"<<endl;
        cin>>num;
        string name;
                cout<<"TYPE THE NAME TO BE SEARCHED:  ";
                cin>>name;
        switch(num)
            {
            case 1:
                listy.onlySectionName();
                break;
            case 2:
                listy.onlysectionMentor();
                break;
            case 3:
                listy.onlysectionHod();
                break;
            case 4:
                listy.onlycourseCoordinator();
                break;
            case 5:
                listy.onlyplaceMentor();
                break;
            case 6:
                listy.onlyclassRepresentive();
                break;
            case 7:
                listy.onlyecellCoordinator();
                break;
            case 8:
                listy.onlyplacementCoordinator();
                break;
            }

	}
	void searchPosition()
    {   int num;
        cout<<"CHOOSE FROM THE BELOW"<<endl;
        cout<<"[1] className\t\t\t[2] sectionMentor\t\t[3] sectionHod\n[4] courseCoordinator\t\t[5] placementMentor\t\t[6] classRepresentive\n[7] ecellCoordinator\t\t[8] placementCoordinator"<<endl;
        cin>>num;
        string name;
                cout<<"TYPE THE NAME TO BE SEARCHED:  ";
                cin>>name;
        switch(num)
            {
            case 1:
                listy.ssectionName(name);
                break;
            case 2:
                listy.ssectionMentor(name);
                break;
            case 3:
                listy.ssectionHod(name);
                break;
            case 4:
                listy.scourseCoordinator(name);
                break;
            case 5:
                listy.splaceMentor(name);
                break;
            case 6:
                listy.sclassRepresentive(name);
                break;
            case 7:
                listy.secellCoordinator(name);
                break;
            case 8:
                listy.splacementCoordinator(name);
                break;
            }
    }

    void searchSuper()
    {   string name, name2;
        cout<<"TYPE THE NAME OF THE CLASS: ";
        cin>>name2;
        ifstream file;
        file.open("lpufinder12.txt",ios::in);
        while (file.read((char*)&k17, sizeof(k17)))
			{
			    if(k17.className == name2)
                    {
                        cout<<"NOW<TYPE THE NAME: ";
                        cin>>name;
                            if(k17.sectionMentor == name)
                                {cout<<" THE PERSON IS SECTION MENTOR OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.sectionHod == name)
                                {cout<<" THE PERSON IS SECTION HOD OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.courseCoordinator == name)
                                {cout<<" THE PERSON IS COURSE COORDINATOR OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.placementMentor == name)
                                {cout<<" THE PERSON IS PLACEMENT MENTOR OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.classRepresentive == name)
                                {cout<<" THE PERSON IS CLASS REPRESENTATIVE OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.ecellCoordinator == name)
                                {cout<<" THE PERSON IS E-CELL COORDINATOR OF THE SECTION: "<<name2<<endl;name="0";}
                            if(k17.placementCoordinator == name)
                                {cout<<" THE PERSON IS PLAECMENT COORDINATOR OF THE SECTION: "<<name2<<endl;name="0";}

                    name = "01";}
			}
			if(name != "0" || name != "01")
            {
                cout<<"<-----------------------NO, SUCH SECTION OR NAME:------------------------->";
            }
		file.close();

    }

	void deleteg()
	{
        string num2;
	    cin>>num2;
	    ifstream file;
	    file.open("lpufinder12.txt",ios::in);
	    ofstream fileto;
	    fileto.open("lpufinder.txt",ios::out);

	    while(file.read((char*)&k17,sizeof(k17)))
        {   if(k17.className != num2)
                fileto.write((char*)&k17,sizeof(k17));
        }
        file.close();
        fileto.close();
        remove("lpufinder12.txt");
        rename("lpufinder.txt","lpufinder12.txt");
        cout<<"<----------------------SUCCESFULLY DELETED------------------->\n\n";
	}



    void editparticular()
        {   viewSection();
            int num;
        cout<<"Enter the class number:"<<endl;
        cin>>num;
        int location = (num-1)*sizeof(k17);
        fstream file;
        file.open("lpufinder12.txt",ios::ate|ios::in|ios::out);
        file.seekp(location);
        cout<<"enter the details of the class"<<endl;
        k17.add_data();
        file.write((char*)&k17,sizeof(k17));
    }

    void editPposition()
    {
        viewSection();
            int num,nume;
        cout<<"Choose the class number:"<<endl;
        cin>>num;
        cout<<"Now, Choose the position:"<<endl;
        cout<<"1 : className\n 2: sectionMentor\n3: sectionHod\n 4: courseCoordinator\n5: placementMentor\n6: classRepresentive\n7: ecellCoordinator\n8: placementCoordinator"<<endl;
        cin>>nume;
        switch(nume)
            {
            case 1:
                listy.eclassName(num);
                break;
            case 2:
                listy.esectionMentor(num);
                break;
            case 3:
                listy.esectionHod(num);
                break;
            case 4:
                listy.ecourseCoordinator(num);
                break;
            case 5:
                listy.eplaceMentor(num);
                break;
            case 6:
                listy.eclassRepresentive(num);
                break;
            case 7:
                listy.eecellCoordinator(num);
                break;
            case 8:
                listy.eplacementCoordinator(num);
                break;
            }

    }

};


int main()
{
    char num;
    system("color A");
    while(1){
    cout<<"\t\t  WELCOME!\n\n";
    cout<<"[1] TO ADD"<<"\t\t\t"<<"[2] TO VIEW"<<endl<<"[3] TO SEARCH"<<"\t\t\t"<<"[4] TO DELETE"<<endl<<"[5] TO EDIT"<<"\t\t\t"<<"[6] TO EXIT\n\n"<<endl;
	Master project;
	cin >> num;
	switch(num)
	{
    case '1':
        cout<<"NUMBERS OF ENTRIES TO BE ENTERED?"<<endl;
        cin>>num;
        num = num - 48;
        project.addSection(num);
        cout<<"\n\n<--------------------------------SUCCESSFULLY ADDED-------------------------------->\n\n";
        Sleep(3000);
        system("cls");
        break;
    case '2':
        cout<<"[1] VIEW ALL"<<"\t\t\t"<<"[2] VIEW SPECIFIC"<<"\t\t\t"<<"[3] SPECIFIC POSTION";
        cin>>num;
        cout<<endl;
        if(num == '1')
           {
            project.viewSection();
            Sleep(10000);
            system("cls");
            }
        else if(num == '2')
            {project.viewSectionSpecific();
            Sleep(4000);
            system("cls");}
        else if(num =='3')
        {
            cout<<"[1] className\t\t\t[2] sectionMentor\t\t[3] sectionHod\n[4] courseCoordinator\t\t[5] placementMentor\t\t[6] classRepresentive\n[7] ecellCoordinator\t\t[8] placementCoordinator"<<endl;
            int numw;
            cin>>numw;
            switch(numw)
            {
            case 1:
                listy.onlySectionName();
                break;
            case 2:
                listy.onlysectionMentor();
                break;
            case 3:
                listy.onlysectionHod();
                break;
            case 4:
                listy.onlycourseCoordinator();
                break;
            case 5:
                listy.onlyplaceMentor();
                break;
            case 6:
                listy.onlyclassRepresentive();
                break;
            case 7:
                listy.onlyecellCoordinator();
                break;
            case 8:
                listy.onlyplacementCoordinator();
                break;
            }

        }
        else
            cout<<"WRONG INPUT"<<endl;
        break;
    case '3':
        cout<<" [1] SEARCH SPECIFIC SECTION\n [2] SEARCH SPECIFIC DETAIL OF ALL CLASS\n [3] SEARCH SEPECFIC DEATAIL OF A CLASS"<<endl;
        cin >>num;
        if(num == '1')
            {
                string name;
                cout<<"Type the name of the section to search\n";
                cin>>name;
                listy.ssectionName(name);}
        else if(num == '2')
            project.searchPosition();
        else if(num == '3')
            project.searchSuper();
        Sleep(3000);
        system("cls");
        break;
    case '4':
        cout<<"[1] DELETE SECTION"<<endl<<"[2] DELETE SPECIFIC POSITION"<<endl<<"[3] DELETE ALL RECORD"<<endl;
        cin>>num;
        if(num =='1')
        {
            cout<<"CHOOSE THE SECTION TO DELETE:"<<endl;
            listy.onlySectionName();
            project.deleteg();
        }
        else if(num == '2')
        {
            cout<<"\nCHOOSE THE POSITION TO DELETE"<<endl;
            cout<<"[1] className\t\t\t[2] sectionMentor\t\t[3] sectionHod\n[4] courseCoordinator\t\t[5] placementMentor\t\t[6] classRepresentive\n[7] ecellCoordinator\t\t[8] placementCoordinator"<<endl;
            int numw;
            cin>>numw;
            switch(numw)
            {
            case 1:
                listy.dclassName();
                break;
            case 2:
                listy.dsectionMentor();
                break;
            case 3:
                listy.dsectionHod();
                break;
            case 4:
                listy.dcourseCoordinator();
                break;
            case 5:
                listy.dplaceMentor();
                break;
            case 6:
                listy.dclassRepresentive();
                break;
            case 7:
                listy.decellCoordinator();
                break;
            case 8:
                listy.dplacementCoordinator();
                break;
            }
            cout<<"\n\n<--------------------------------SUCCESSFULLY DELETED-------------------------------->\n\n";
        }
        else if(num == '3')
        {   remove("lpufinder12.txt");
            cout<<"<------------------ALL RECORD DELETED---------------->";
        }
        else{
            cout<<"Invalid"<<endl;
        }
        break;
    case '5':
        cout<<"[1]EDIT WHOLE SECTION\n[2] EDIT PARTICULAR POSITION IN SECTION"<<endl;
        cin>>num;
        if(num == '1')
        {
            project.editparticular();
        }
        else if(num == '2')
        {
            project.editPposition();
        }
        else
            cout<<"<-------------invalid------------->\n\n";

        cout<"-----------------------SUCESSFULLY EDITED----------------->\n\n";
        break;
    case '6':
        cout<<"\n\n\n\n<------------------------------THANKYOU-------------------------->\n\n\n\n\n";
        exit(0);
         break;
    default:
        {
        cout<<"Wrong input! Try again.\n";
        }
	}

    }
}
