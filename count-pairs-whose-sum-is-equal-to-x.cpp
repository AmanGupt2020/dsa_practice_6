int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int ct=0;
        unordered_set<int>dp;
        while(head1!=NULL){
            dp.insert(head1->data);
            head1=head1->next;
        }
        while(head2!=NULL){
            if(dp.find(x-head2->data)!=dp.end()) ct++;
            head2=head2->next;
        }
        return ct;
