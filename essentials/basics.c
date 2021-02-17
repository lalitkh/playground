#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//*********************************************************
//
//  Link List Implementation
//
//*********************************************************

// crete a structure node
// which contains data and pointer to the next node
struct Node
{
    int data;
    struct Node *next;
} ;


// create first node to keep track where the list begins
// always points to the first node in the list
// will be empty initialy
struct Node *first = NULL;

struct Node* create_link_list(int arr[], int n)
{
    int i;
    struct Node *new, *last; // *new is temporary pointer node to create
    
    // create first node
    first = (struct Node *)malloc(sizeof(struct Node));
    
    first->data = arr[0];
    first->next = NULL;
    
    // currently first & last pointing to same node
    last = first;
    
    
    for(i=1;i<n;i++)
    {
        // create new node
        new = (struct Node *)malloc(sizeof(struct Node));
        
        new->data = arr[i];
        new->next = NULL;
        
        // assign new node pointer to last node`s next
        last->next = new;
        
        // shift last node pointer to newly created node
        last = new;
    }
    return first;
}

void display_link_list(struct Node *p)
{
    while (p != NULL) {
        printf("%d\n",p->data);
        p = p->next;
    }
    puts("\n");
}

void recursive_display(struct Node *p)
{
    if (p != NULL)
    {
        // call recursively and create activation record on stack
        // first print then call
        printf("%d\n",p->data);
        recursive_display(p->next);
    }
}

void recursive_reverse_display(struct Node *p)
{
    if (p != NULL)
    {
        // call recursively and create activation record on stack
        // first call then print while returning
        recursive_reverse_display(p->next);
        printf("%d\n",p->data);
    }
}

int get_node_count(struct Node *p)
{
    int count = 0 ;
    
    while (p!=NULL) {
        count++;
        p=p->next;
    }
    return count;
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and =0;
  int max_or = 0;
  int max_xor = 0;
  
  for (int i=1 ; i <=n ; i++){
      for(int j=i+1; j <=n ; j++){
          
          if (((i & j ) < k) && (max_and <= (i & j )))
                    max_and = (i & j );
          if (((i | j ) < k) && (max_or <= (i | j )))
                    max_or = (i | j );
          if (((i | j ) < k) && (max_xor <= (i | j )))
                    max_xor = (i | j );
          
      }
  }
  printf("%d\n%d\n%d\n", max_and, max_or,max_xor);
}

//*********************************************************
//
//  Stack Implementation using Array
//
//*********************************************************

struct Stack{
    
    int size;
    int top;
    int *S;
};

void create_stack(struct Stack *st){
    printf("Enter size of Stack\n");
    scanf("%d", &st->size);
    
    st->top = -1;
    st->S = (int *)malloc(st->size*sizeof(int));
}


void display_stack(struct Stack st){
    
    int i ;
    
    for(i=st.top;i>=0;i--)
        printf("%d ", st.S[i]);
    printf("\n");
    
}

void push_to_stack(struct Stack *st, int x){
    
    if (st->top == st->size-1)
        printf("Stack is Full\n");
        
    else{
        st->top++;
        st->S[st->top] = x;
    }
}

int pop_from_stack(struct Stack *st){
    
    int item_deleted = -1;
    
    if (st->top == -1)
        printf("Stack is Empty\n");
    else
        item_deleted = st->S[st->top];
        st->top--;
    
    return item_deleted;
    
}

int peek_in_stack(struct Stack st, int pos){
    int x = -1;
    if (st.top-pos+1<0)
        printf("Invalid Stack Position\n");
    else
        x = st.S[st.top-pos+1];
    
    return x;
}

//*********************************************************
//
//  Stack Implementation using Linked List
//
//*********************************************************

// create first node to keep track where the top of stack
// always points to the first node in the list
// will be empty initialy
struct Node *top = NULL;

void push_to_stack_ll(int x){
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    
    if (t==NULL)
        printf("Stack is full\n");
    else
    {
        t->data=x;
        t->next= top;
        top=t;
    }
    
}

int pop_from_stack_ll(){
    
    int x = -1;
    
    struct Node *temp;
    
    if (top == NULL)
        printf("Stack is Empty\n");
    else{
        temp = top; // to free memory
        top=top->next;
        x = temp->data;
        free(temp);
    }
    return x;
}
void display_stack_ll(){
    struct Node *temp;
    temp = top;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(void){
    
//    testing Array implementaion of stack
//    struct Stack st;
//    create_stack(&st);
//    push_to_stack(&st, 6);
//    push_to_stack(&st, 8);
//    push_to_stack(&st, 9);
//    push_to_stack(&st, 10);
//
//    printf("Element by position - %d\n",peek_in_stack(st, 2));
//
//    display_stack(st);
    
//    testing Linked List Implementation of Stack
    
    push_to_stack_ll(6);
    push_to_stack_ll(8);
    push_to_stack_ll(4);
    push_to_stack_ll(10);
    
    display_stack_ll();
    
    printf("\n\n");
    
//    printf("%d\n",pop_from_stack(&st));
//    printf("%d\n",pop_from_stack(&st));
//    printf("%d\n",pop_from_stack(&st));
//
//    display_stack(st);
    
    
    
//    int arr[] = {9,7,1,3};
//
//    struct Node *first = create_link_list(arr, 4);
//    display_link_list(first);
//    int arr2[] = {8,2,10,4,12,6};
//    struct Node *second = create_link_list(arr2, 6);
//    recursive_display(second);
//    puts("\n");
//    recursive_reverse_display(second);
//    puts("\n");
//    print_int(get_node_count(first));
//    puts("\n");
//    print_int(get_node_count(second));
//    puts("\n");
//
//    calculate_the_maximum(4, 3);
    return 0;
    
}
