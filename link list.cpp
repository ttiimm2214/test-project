#include <iostream>

using namespace std;


struct merge{
    int val;
    merge *next;
};

merge *head;
  
int add_number(int number){
    merge *lastest;
    lastest->val=number;
    lastest->next=head;
    head=lastest;
}

int print(merge *pr){
    merge *temp;
    temp=pr;
    while(temp!=NULL){
        cout<< temp->val;
    	temp=temp->next;
    }
}

int main()
{
    head=NULL;
    add_number(1);
    add_number(2);
    add_number(4);
    print (head);
}
