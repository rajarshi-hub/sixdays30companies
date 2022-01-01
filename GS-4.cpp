string encode(string src)
{     
  string ans = "";
  for(int i=0;i<src.size();)
  {
      char ch = src[i];
      int c = 0;
      while(i < src.size() && src[i] == ch)
      {
          c++;
          i++;
      }
      ans+=ch;
      ans+=to_string(c);  //Adding Count
  }
  return ans;
}     
 
