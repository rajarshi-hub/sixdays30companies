int atoi(string str) {
        int ind = 0;
        if(str[0] == '-')
        ind = 1;
        int no = 0;
        int n = str.size();
        for(int i=ind;i<n;i++)
        {
            if(str[i] <'0' || str[i] >'9')
            return -1;
            no*=10;
            no+=str[i]-'0';
        }
         if(str[0] == '-')
        return (-1)*no;
        return no;
    }
