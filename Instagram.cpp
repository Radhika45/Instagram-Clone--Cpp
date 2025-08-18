#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"You have exceeded the number of stories to post for today."<<endl;   
   else {
      if (front == - 1)
      front = 0;
      cout<<"Post a story for your profile : ";
      cin>>val;
      rear++;
      queue[rear] = val;
      cout<<"Posted stories are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<"  ";
         cout<<endl;
   }
}
void Delete() {
	
   if (front == - 1 || front > rear) {
      cout<<"No Story Remaining to Delete"<<endl;
      return ;
   } else {
      cout<<"Story deleted from your profile : "<< queue[front] <<endl;
      front++;;
      cout<<"Posted stories are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<"  ";
         cout<<endl;
   }
}


void Display() {
   if (front == - 1)
   cout<<"No Stories to show till now,share some moments with your friends"<<endl;
   else {
      cout<<"Posted stories are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
	
	system("color 0C");
	system("title INSTAGRAM");
   int ch;
   cout<<"                                                         INSTAGRAM              "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   cout<<"                                    #POST, #DELETE and #REVIEW your stories in seconds                            "<<endl;
      cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   cout<<"1) Add New Story"<<endl;
   cout<<"2) Delete previous Story"<<endl;
   cout<<"3) Display all the Stories"<<endl;
   cout<<"4) Close App"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         cout<<" "<<endl;
         break;
         case 2: Delete();
         cout<<" "<<endl;
         break;
         case 3: Display();
         cout<<" "<<endl;
         break;
         case 4: cout<<"Exit"<<endl;
         cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
         cout<<"                                            ThankYou for using Instagram, Welcome back Again !                                                ";
		 break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
