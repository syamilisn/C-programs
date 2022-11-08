
        node* temp = head;
        head = head->next;
        free(temp);
        return head;