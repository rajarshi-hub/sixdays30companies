vector<int> vec1(9,0);
	    for(int i=0;i<n;i++)
	    {
	        if(nuts[i] == '!')
	        vec1[0]++;
	        if(nuts[i] == '#')
	        vec1[1]++;
	        if(nuts[i] == '$')
	        vec1[2]++;
	        if(nuts[i] == '%')
	        vec1[3]++;
	        if(nuts[i] == '&')
	        vec1[4]++;
	        if(nuts[i] == '*')
	        vec1[5]++;
	        if(nuts[i] == '@')
	        vec1[6]++;
	        if(nuts[i] == '^')
	        vec1[7]++;
	        if(nuts[i] == '~')
	        vec1[8]++;
	    }
	    int i = 0;
	    if(vec1[0] == 1)
	    {
	        nuts[i] = '!';
	        nut[i] = '!';
	        i++;
	    }
	    if(vec1[1] == 1)
	    {
	        nuts[i] = '#';
	        nut[i] = '#';
	        i++;
	    }
	    if(vec1[2] == 1)
	    {
	        nuts[i] = '$';
	        nut[i] = '$';
	        i++;
	    }
	    if(vec1[3] == 1)
	    {
	        nuts[i] = '%';
	        nut[i] = '%';
	        i++;
	    }
	    if(vec1[4] == 1)
	    {
	        nuts[i] = '&';
	        nut[i] = '&';
	        i++;
	    }
	    if(vec1[5] == 1)
	    {
	        nuts[i] = '*';
	        nut[i] = '*';
	        i++;
	    }
	    if(vec1[6] == 1)
	    {
	        nuts[i] = '@';
	        nut[i] = '@';
	        i++;
	    }
	    if(vec1[7] == 1)
	    {
	        nuts[i] = '^';
	        nut[i] = '^';
	        i++;
	    }
	    if(vec1[8] == 1)
	    {
	        nuts[i] = '~';
	        nut[i] = '~';
	        i++;
	    }
	    
	     
	}
