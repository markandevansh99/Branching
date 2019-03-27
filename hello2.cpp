void initprice()
{ int flag=0;
 if(strcmp(ofabric,"Denim")==0)
 { flag=1;
  if(strcmp(otype,"Trouser")==0)
  oprice=1500;
  else
  if
  (strcmp(otype,"Jacket")==0)
  oprice=2500;
 }
 if(flag==0)
 {
 if(strcmp(otype,"Trouser")==0)
 oprice=1500-(1500/4);
 else
 if
 (strcmp(otype,"Jacket")==0)
 oprice=2500-(2500/4);
 }
}
