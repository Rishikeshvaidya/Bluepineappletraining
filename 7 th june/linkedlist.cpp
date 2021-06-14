#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{

    public :
    int book_id;
    float book_cost;
    string book_author;

    class node *next;


    class node * create()
    {
        class node *head,*nn,*temp;
        head=nn=temp=NULL;
        char s;
        do
        {
            cout<<"\nEnter Id of book: ";
            cin>>book_id;
            cout<<"\nEnter cost of book : ";
            cin>>book_cost;
            cout<<"\nEnter author of book : ";
           getline(cin>>ws,book_author);
            nn=new node();
            nn->book_id=book_id;
            nn->book_cost=book_cost;
            nn->book_author=book_author;
			nn->next=NULL;
            if(head==NULL)
            {
                head=nn;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=nn;
            }
            
            cout<<"\nDo want to Add another book again Plz Enter [y/n]";
            cin>>s;

        } while (s=='y');

        return head;
    }

    void displaybooks(class node *head)
    {
        class node *temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<"\n";
            cout<<"Book ID:"<<temp->book_id<<"\t";
            cout<<"Book Cost:"<<temp->book_cost<<"\t";
            cout<<"Book Author:"<<temp->book_author<<"\n";
            temp=temp->next;
        }
    }
    class node * insertatfirst(class node *head)
    {
    	class node *nn,*temp;
    	nn=temp=NULL;
    	cout<<"\nEnter Id of book: ";
            cin>>book_id;
            cout<<"\nEnter cost of book : ";
            cin>>book_cost;
           cout<<"\nEnter author of book : ";
           getline(cin>>ws,book_author);
    	nn=new node();
    	nn->book_id=book_id;
    	nn->book_cost=book_cost;
    	nn->book_author=book_author;
    	nn->next=NULL;
    	if(head==NULL)
    	{
    		head=nn;
		}
		else
		{
			nn->next=head;
			head=nn;
		}
		return head;
	}
	class node * insertatmiddle(class node  *head)
	{
		class node *nn,*temp;
		nn=temp=NULL;
		int id;
		cout<<"\nEnter id of book after u want to insert book :";
		cin>>id;
		cout<<"\nEnter Id of book: ";
        cin>>book_id;
        cout<<"\nEnter cost of book : ";
        cin>>book_cost;
        cout<<"\nEnter author of book : ";
           getline(cin>>ws,book_author);
    	nn=new node();
    	nn->book_id=book_id;
    	nn->book_cost=book_cost;
    	nn->book_author=book_author;
    	nn->next=NULL;
    	temp=head;
    	while(temp->book_id!=id)
    	{
    		temp=temp->next;
		}
		nn->next=temp->next;
		temp->next=nn;
		return head;
	}
	
	class node * insertatlast(class node *head)
	{
		class node *nn,*temp;
		nn=temp=NULL;
		cout<<"\nEnter Id of book: ";
        cin>>book_id;
        cout<<"\nEnter cost of book : ";
        cin>>book_cost;
        cout<<"\nEnter author of book : ";
           getline(cin>>ws,book_author);
    	nn=new node();
    	nn->book_id=book_id;
    	nn->book_cost=book_cost;
    	nn->book_author=book_author;
    	nn->next=NULL;
    	temp=head;
    	while(temp->next!=NULL)
    	{
    		temp=temp->next;
		}
		
		temp->next=nn;
		return head;
	}
	
	class node * deleteatfirst(class node *head)
	{
		class node *temp;
		temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
		return head;
	}
	class node * deleteatmiddle(class node *head)
	{
		class node *temp,*prs;
		int id;
		cout<<"\nEnter id of book u want to delete";
		cin>>id;
		temp=head;
		while(temp->book_id!=id)
		{
			prs=temp;
			temp=temp->next;
		}
		prs->next=temp->next;
		temp->next=NULL;
		delete temp;
		return head;
	}
	class node * deleteatlast(class node *head)
	{
		class node *temp,*prs;
		int id;
		temp=head;
		while(temp->next!=NULL)
		{
			prs=temp;
			temp=temp->next;
		}
		prs->next=NULL;
		temp->next=NULL;
		delete temp;
		return head;
	}
	
	bool searchbook(class node *head)
	{
		class node *temp;
		temp=head;
		int bookid;
		bool flag=false;
		cout<<"\nEnter id of the book you want to seach\n";
		cin>>bookid;
		while(temp!=NULL)
		{
			if(temp->book_id==bookid)
			{
				flag=true;
				break;
			}
			temp=temp->next;
		}
		return flag;
	}
};
int main()
{
    class node n,*head;    /// Encapsulation
    int ch;
    bool x;
    cout<<"\n\t\t\t Book Management System\n\n";
    do
    {
       cout<<"\n1.Create \n2.list all books \n3.insert at first\n4.insert at middle \n5.insert at last \n6.delete at first \n7.delete at middle \n8.delete at last \n9.search [By book_id] \n10.quiet \n\nEnter your choice :";
       cin>>ch;
       switch(ch)
       {
           case 1:
                head=n.create();
				cout<<"\nCreated Successfully";
                break;
            case 2:
            	cout<<"\n\n\t\t\tAll Book Details\n\n";
                n.displaybooks(head);
                
                break;
            case 3:
            	head=n.insertatfirst(head);
            	cout<<"\ninserted first book Successfully\n";
            	break;
            case 4:
            	head=n.insertatmiddle(head);
            	cout<<"\ninserted  middle book  Successfully\n";
            	break;
            case 5:
            	head=n.insertatlast(head);
            	cout<<"\ninserted last book  Successfully\n";
            	break;
            case 6:
            	head=n.deleteatfirst(head);
            	cout<<"\nDeleted first book  Successfully\n";
            	break;
            case 7:
            	head=n.deleteatmiddle(head);
            	cout<<"\nDeleted middle book  Successfully\n";
            	break;
            case 8:
            	head=n.deleteatlast(head);
            	cout<<"\nDeleted last book  Successfully\n";
            	break;
            case 9:
            	if(n.searchbook(head))
            	{
            		cout<<"\n Book found\n";
				}
				else
				{
					cout<<"\n Book Not found\n";
				}
				break;
			case 10:
				exit(0);
				
			default:
				cout<<"\n Invalid choice";
       }
    } while (ch<=10);
    
}
