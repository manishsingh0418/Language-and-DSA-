 vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        
         vector<Node *>ans;
         Node *temp1=new Node(-1);
         Node *val1=temp1;
         Node *temp2=new Node(-1);
         Node *val2=temp2;
        Node *first=head,*second=head->next;
        
        while(first!=NULL){
            temp1->next=new Node(first->data);
            temp1=temp1->next;
            if(first->next)first=first->next->next;
            else first=first->next;
        }
        ans.push_back(val1->next);
        
        
         while(second!=NULL){
            temp2->next=new Node(second->data);
            temp2=temp2->next;
            if(second->next)second=second->next->next;
            else second=second->next;
        }
        ans.push_back(val2->next);
       
        return ans;
        
        
    }