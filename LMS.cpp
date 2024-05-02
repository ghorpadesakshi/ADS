 #include<iostream>
 using namespace std;
 class lms
 {
  public:
  int bid,pz;
  string title,author;
  lms*next;
  void accept();
  void display();
  void search();
  void update();
  void Delete();
  
 }*start,*End;
 
 void lms::accept()
 {
  lms *temp;
  temp=new lms;
  cout<<"Enter Book ID :";
  cin>>temp->bid;
  cout<<"Enter Book Title :";
  cin>>temp->title;
  cout<<"Enter Book Author :";
  cin>>temp->author;
  cout<<"Enter Book Prize :";
  cin>>temp->pz;
  temp->next=NULL;
  if(start==NULL)
  {
  End=start=temp;
  }
  else
  {
  End->next=temp;
  End=temp;
  }
 }
 
 void lms::display()
 {
  lms *temp;
  temp=start;
  int count=0;
  cout<<"\n"<<"BOOK ID"<<"\t"<<"TITLE"<<"\t"<<"AUTHOR"<<"\t"<<"PRIZE";
  while(temp!=NULL)
  {//cout<<"\n"<<"BOOK ID"<<"\t"<<"TITLE"<<"\t"<<"AUTHOR"<<"\t"<<"PRIZE";
   cout<<"\n"<<temp->bid<<"\t"<<temp->title<<"\t"<<temp->author<<"\t"<<temp->pz;
   temp=temp->next;
   count++;
  
  }
  cout<<"\n Number of Record : "<<count<<endl;
 }
 
 //SEARCHING THE RECORD.....
 void lms::search()
 {
   int id,f=0;
   lms *temp;
   temp=start;
   cout<<"Enter the ID you want:";
   cin>>id;
   
   while(temp!=NULL)
   {
    if(temp->bid==id)
    {
     f=1;
     cout<<"\n"<<"BOOK ID"<<"\t"<<"TITLE"<<"\t"<<"AUTHOR"<<"\t"<<"PRIZE";
     cout<<"\n"<<temp->bid<<"\t"<<temp->title<<"\t"<<temp->author<<"\t"<<temp->pz;
     cout<<"\nRecord found..";
     //s->display();
     break;
    }
    temp=temp->next;
    
   }
   if(f==0)
   {
    cout<<"Record NOT Found...!!!!";
   }
 }
 
 //UPDATE THE RECORD
 void lms::update()
 {
  int id,f=0;
   lms *temp;
   temp=start;
   cout<<"Enter the ID you want:";
   cin>>id;
   
   while(temp!=NULL)
   {
    if(temp->bid==id)
    {
     f=1;
     //cout<<"\n"<<temp->bid<<"\t"<<temp->title<<"\t"<<temp->author<<"\t"<<temp->pz;
    cout<<"Enter Book Title :";
  cin>>temp->title;
  cout<<"Enter Book Author :";
  cin>>temp->author;
  cout<<"Enter Book Prize :";
  cin>>temp->pz;
    }
    temp=temp->next;
   }
   if(f==0)
   {
    cout<<"Record Not Found...!!!!";
   }
 }
 
 //DELETING ANY RECORD
 void lms::Delete()
 {
  int id;
  lms *temp,*p,*prev;
  temp=start;
  cout<<"Enter the node value which u want to delete :";
  cin>>id;
  
 /* while(temp!=NULL && temp->bid!=id)
   {
   p=temp;
   temp=temp->next;
     }
  p->next=temp->next;
  //temp->next=p->next;//=p->next;
  */
  
  while(temp!=NULL)
  {
  if(temp->bid==id)
  {
  cout<<"\n Data is deleted";
  break;
  }
  p=temp;
  temp=temp->next;
  }
  p->next=temp->next;
  delete(temp);
 }
 
 int main()
 {
  lms l;
  int ch;
  
  do{
  cout<<"\n*****MENU****";
  cout<<"\n1.Accept detail";
  cout<<"\n2.Display detail";
  cout<<"\n3.Search ";
  cout<<"\n4.Update ";
  cout<<"\n5.Delete ";
  cout<<"\n6.Exit..!!";
  cout<<"\nEnter Your Choice :";
  cin>>ch;
  switch(ch)
  {
     case 1:
     l.accept();
     break;
     
     case 2:
     l.display();
     break;
     
     case 3:
     l.search();
     break;
     
     case 4:
     l.update();
     break;
     
     case 5:
     l.Delete();
     break;
     
     case 6:
     exit(0);
     
     default:
     cout<<"Invalid Choice...!!!!";
     }
  
  
  }while(ch!=0);
 
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
