//#include<iostream>
//using namespace std;

/* int factorial(int n)
{
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    return fact;
}
    
void printTillN(int a)
{
    int i=1;
    while(i<=a)
    {
        cout<<i<<" ";
        i++;
    }
} */



    //Fibonacci Sequence
    //int n=5;
    //int a=0;
    //cout<<a<<endl;
    //int b=1;

    //int fibo=b;
    //cout<<fibo<<endl;

    //for(int i=1;i<n;i++)
    //{
    //    fibo = a+b;
    //    cout<<fibo<<endl;
    //    a=b;
    //    b=fibo;
    //}

    //Knowing if a number is a Palindrome Number
    //cout<<"Enter a number"
    //cin>>num;

    //int temp=num;
    //int ans =0;

    //while(num!=0)
    //{
    //    ans=ans*10 + num%10;
    //    num=num/10;
    //}    

    //cout<<"ans is "<<ans<<endl;
    //if(ans==temp)
    //{
    //    cout<<"palindrome number"<<endl;
    //}

    /* cout<<"enter n"<<endl;
	int n;
	cin>>n;

    int fact_n=factorial(n);
    cout<<fact_n<<endl; */


//#include<iostream>
//using namespace std;

// void printArray(int n, int b[])
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<b[i]<<endl;
//     }

// }






//int main()
//{
    //Enter an array of n elements
    // int a[10];

    // for(int i=0;i<10;i++)
    // {
    //    a[i]=i;
    // }

    // int min=1;
    // for(int i=0;i<10;i++)
    // {
    //     //cout<<a[i]<<endl;
    //     if(min>a[i])
    //     {
    //         min=a[i];
    //     }
    
    // } 

    // printArray(7,a);




//   return 0;

// #include<iostream>
// using namespace std;


// int findLength(char input[])
// {
//     int count=0;
//     int i=0;
//     while(input[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }

// void reverseString(char input[])
// {
//     int i,j;
//     i=0;
//     j=findLength(input)-1;

//     while(i<j)
//     {
//         char temp=input[i];
//         input[i]=input[j];
//         input[j]=temp;
//        i++;
//        j--;
//    }
    
//}





// int main()
// {
    
//     char input[100];
//     cin.getline(input,100);
    
//     int ans=findLength(input);
//     cout<<ans<<endl;

//     reverseString(input);
    
//     cout<<input;

//     return 0;
// }


//Sobrecarga de operadores

// #include <iostream>
// using namespace std;

// class Position
// {
//     public:
//         int x=10;
//         int y=20;

//         Position operator+(Position pos)
//         {
//             Position new_post;
            
//             new_post.x=x+ pos.x;
//             new_post.y=y+pos.y;

//             return new_post;
//         }

//         bool operator==(Position pos)
//         {
//             if(x==pos.x && y==pos.y)
//             {
//                 return true;
//             }
//             return false;
//         }
// };

// std::ostream& operator<<(std::ostream& output, const Position  &pos)
// {   
//             return output<<"("<<pos.x<<","<<pos.y
//                          <<")"<<endl;
            
// };

// int main()
// {
//     Position pos1,pos2;
//     Position pos3=pos1+pos2;
    
//     cout<<pos3.x<<" "<<pos3.y<<endl;

//     if(pos1==pos2)
//     {
//         cout<<"they are the same";
//     }
//     else
//     {
//         cout<<"They are not the same";
//     }

//     std::cout<<pos1<<std::endl;

//     return 0;
// }
 

//------------------------------------
//Linked List

// #include<iostream>
// using namespace std;


// class Node
// {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data=data;
//             this->next=NULL;
//             //por qué lo declara?
//             //de dónde sale el this?
//         }
// };

// Node* takeInput()
// {
//     int data;
//     cin>>data;
//     Node *head=NULL;

//     while(data!=-1)
//     {
//         Node *temp=new Node(data);
//         //acá lo que estamos haciendo es generar
//         //un puntero temp a un Nodo

//         if(head==NULL)
//         {
//             head=temp;
//         }
//         else
//         {
//             Node *t1=head;
//             while(t1->next!=NULL)
//             {
//                 t1=t1->next;
//             }
//             t1->next=temp;
//         }

//         cin>>data;
//     }

//     return head;
// }

// void print(Node*head)
// {
//     while(head->next!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<head->data;
// }


// int main()
// {
//     // Node n1=Node(10);
//     // Node n2=Node(20);
//     // Node n3=Node(30);

//     // n1.next=&n2;
//     // n2.next=&n3;

//     // cout<<n1.next<<endl;
//     // cout<<&n2;

//     // //Diferencia entre . y ->
//     // Node *head=&n1;
//     // cout<<head->data;
//     // cout<<endl;
//     // cout<<n1.data;

//     //(Node *head) es un puntero que apunta
//     //a la direccion de memoria de n1
//     //usamos -> para poder acceder a los 
//     //atributos de n1.
//     //n1 es un objeto de Node
//     //accedemos al atributo de n1 con .data
    
//     //al final, lo que generamos es lo siguiente
//     //head->n1->n2->n3->NULL

//     Node *head=takeInput();
//     print(head);


//     return 0;
// }

//------------------------------------------------































