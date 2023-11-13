if(node == NULL)
        {
            return 0;
        }
        else
        {
            int lheight = height(node -> left);
            int rheight = height(node -> right);
            
            if(lheight < rheight)
            {
                return (rheight + 1);
            }
            else if(lheight > rheight )
            {
                return (lheight + 1);
            }
            else 
            {
                return (lheight + 1);
            }
            
        }
