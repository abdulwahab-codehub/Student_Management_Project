#include<iostream>
using namespace std;


string name[20];
depart_name[20];
room_no[20];
roll_no[20];
phone_no[20];

int total=0;

void add_record()
{
	int choice;
    cout<<"*****************************"<<endl;
	cout<<"How many student do you want to enter: ";
    cin>>choice;
    
    if(total==0)
	{
	  total=total+choice;
        for(int i = 0; i<choice; i++)
    	{
	    	cout<<"*****************************"<<endl;
        	cout<<"Enter data of student: "<<i+1<<endl<<endl;
        	cout<<"Enter Name: ";
		    cin>>name[i];
	    	cout<<"Enter Department Name: ";
	    	cin>>depart_name[i]; 
	    	cout<<"Enter Room no: ";
	    	cin>>room_no[i];
	    	cout<<"Enter roll no: ";
	    	cin>>roll_no[i];
	    	cout<<"Enter Contract no: ";
	    	cin>>phone_no[i];
	   
    	}
    }

    else{
    	for(int i=total; i<choice+total ;i++)
	    {
	    	cout<<"*****************************"<<endl;
        	cout<<"\nEnter data of student : "<<i+1<<endl<<endl;
        	cout<<"Enter Name: " ;
	    	cin>>name[i];
			cout<<"Enter Department Name: ";
			cin>>depart_name[i];
			cout<<"Enter Room no:  ";
			cin>>room_no[i];
			cout<<"Enter roll no:  ";
		    cin>>roll_no[i];
	    	cout<<"Enter Contract no:  ";
	    	cin>>phone_no[i];	
        }
     	total=total+choice;
    }
}

void  show_record()
{
	cout<<"*****************************"<<endl;
	cout<<"ALL STUDENTS DATA"<<endl;
	cout<<"*****************************"<<endl;
	
	for(int i=0; i<total; i++)
	{
	    cout<<"*****************************"<<endl;
	    cout<<"Data of the student:  "<<i+1<<endl<<endl;
    	cout<<"Name: "<<name[i]<<endl;
    	cout<<"Department name: "<<depart_name[i]<<endl;
    	cout<<"Room No: "<<room_no[i]<<endl;
    	cout<<"roll No: "<<roll_no[i]<<endl;
    	cout<<"Contact No: "<<phone_no[i]<<endl;
    	cout<<"*****************************"<<endl;	
	}
}

void search_record()
{
    string rollno;
    cout<<"*****************************"<<endl;
    cout<<"enter the roll no of the student which you want to search: "  ;
    cin>>rollno;
    for(int i=0; i<total; i++)
    {
    	if(rollno==roll_no[i])
    	{
	    	cout<<"*****************************"<<endl;
			cout<<"Data of the student: "<<i+1<<endl<<endl;
	        cout<<"Name: "<<name[i]<<endl;
	        cout<<"Department name: "<<depart_name[i]<<endl;
	        cout<<"Room Number: "<<room_no[i]<<endl;
	        cout<<"roll Number: "<<roll_no[i]<<endl;
	        cout<<"contract Number: "<<phone_no[i]<<endl;
	        cout<<"*****************************"<<endl;
        }
        else
        {
        	cout<<"*****************************"<<endl;
        	cout<<"You enter a wrong roll no. please try with correct rollno"<<endl;
        	cout<<"*****************************"<<endl;
		}
	}

}
void  update_record()
{    
     string rollno;
     cout<<"*****************************"<<endl;
    cout<<"enter the roll no of the student which you want to search: "  ;
    cin>>rollno;
    for(int i=0; i<total; i++)
    {
        if(rollno==roll_no[i])
    	{      
    	cout<<"*****************************"<<endl;
		cout<<"pervious data"<<endl<<endl;
		cout<<"Data of the student: "<<i+1<<endl<<endl;
	    cout<<"Name: "<<name[i]<<endl;
	    cout<<"Department name: "<<depart_name[i]<<endl;
	    cout<<"Room Number: "<<room_no[i]<<endl;
	    cout<<"roll Number: "<<roll_no[i]<<endl;
	    cout<<"contract Number: "<<phone_no[i]<<endl;
	    cout<<"*****************************"<<endl;
	    
	    cout<<"Enter the new data"<<endl;
	    
	    cout<<"*****************************"<<endl;
	    cout<<"Enter name: ";
	    cin>>name[i];
	    cout<<"Enter Depatment: ";
	    cin>>depart_name[i];
	    cout<<"Enter room no: ";
	    cin>>room_no[i];
	    cout<<"Enter rollno: ";
	    cin>>roll_no[i];
	    cout<<"Enter contract Number: ";
	    cin>>phone_no[i];
	    cout<<"*****************************"<<endl;
        }
	}


}
void  delete_record()
{     int  a;
     cout<<"*****************************"<<endl;
     cout<<"Press 1 to Delete Full Record"<<endl;
     cout<<"Press 2 to Delete Spacific Record"<<endl;
     cout<<"*****************************"<<endl;
     
     cin>>a;
     
     if(a==1)
       {
     	
     	total= 0;
     	cout<<"*****************************"<<endl;
     	cout<<"all record is deleted"<<endl;
     	cout<<"*****************************"<<endl;    	
	    }
	    
	 else if(a==2)
	 {
	 
	 	 string rollno;
	 	 cout<<"*****************************"<<endl;
	 	 cout<<"Enter the Roll No which you want to Delete: ";
	 	 cin>>rollno;
	 	 for(int i=0; i<total ; i++) 
	 	 {
	 	 	if(rollno==roll_no[i])
	 	 	{
	 	 		if(i==total)
	 	 		{
	 	 			
				
	 	 	       for(int j=i; j<total; j++)
			    	{
				 	name[j]=name[j+1];
				 	depart_name[j]=depart_name[j+1];
				 	room_no[j]=room_no[j+1];
				 	roll_no[j]=roll_no[j+1];
				 	phone_no[j]=phone_no[j+1];
			    	}	
				 break;
			}
				 
				total--;
				cout<<"*****************************"<<endl;
				cout<<"your required record is deleted.."<<endl;
				cout<<"*****************************"<<endl;	 	 		 
			}	 	 	
	     }
     }	 
}
    

int main()
{  
      int value;
      while (true)
      {
       cout<<"*****************************"<<endl;
       cout<<"press 1 to Enter Data"<<endl;
       cout<<"Press 2 to Show Data"<<endl;
       cout<<"press 3 to Search Data"<<endl;
       cout<<"press 4 to Update Data"<<endl;   
       cout<<"press 5 to Delete Data"<<endl;
       cout<<"press 6 to exit"<<endl;
       cout<<"*****************************"<<endl;
       cin>>value;
       switch (value)
       {
       case  1:
            add_record();
            break;
        case 2:
            show_record();
            break;
        case 3:
            search_record();
            break;
        case 4:
            update_record();
            break;
        case 5:
            delete_record();
            break;
        case 6:
            exit(0);
            break;
                
       default:
       	cout<<"*****************************"<<endl;
            cout<<"invalid input"<<endl;
            cout<<"*****************************"<<endl;
        break;
       }    
    }
}
