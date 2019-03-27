Outfit()
{
 strcpy(ocode,"not initialised");
 strcpy(otype,"not initialised");
 strcpy(ofabric,"not initialised");
 osize=0;
 oprice=0;
}
void Input()
{
 cout<<"\nEnter Code::";
 gets(ocode);
 cout<<"\nEnter Size::";
 cin>>osize;
 cout<<"\nEnter Fabric::";
 gets(ofabric);
 cout<<"\nEnter Type::";
 gets(otype);
 initprice();
}
