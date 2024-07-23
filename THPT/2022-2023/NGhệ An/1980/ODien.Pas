var a:array[1..10000] of int32;
    n,m,i,j,d:int32;
    f,g:text;
procedure doc;
 begin
  assign(f,'odien.inp');
  assign(g,'odien.out');
  reset(f);
  rewrite(g);
  readln(f,n,m);
  for i:=1 to n do
   read(f,a[i]);
 end;
Begin
 doc;
 d:=0;
 for i:=1 to n do
 if a[i]=m then
  d:=d+1;
 for i:=1 to n-1 do
  for j:=i+1 to n do
   if (a[i]+a[j])>m then
   d:=d+1;
   if d<>0 then
    write(g,d)
    else write(g,-1);

 close(f);close(g);
End.

