char a;
cin>>a;
if(a>='a' && a<='z')
cout<<"lower case";
else if(a>='A' && a<='Z')
cout<<"upper case";
else if(a>=48 && a<=57 )
cout<<"numeric";