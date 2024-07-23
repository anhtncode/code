var a,b,i,d:longint;
    T:int32;
    f,g:text;
function kt(n:int32):boolean;
 var j:int32;
  begin
   kt:=false;
   T:=0;
   for j:=1 to n div 2 do
    if n mod j =0 then
     T:=T+j;
    if T>n then kt:=true;
  end;
procedure doc;
 begin
  assign(f,'KhongHoanHao.inp');
  assign(g,'KhongHoanHao.out');
  reset(f);
  rewrite(g);
  read(f,a,b);
 end;
procedure dong;
begin
 close(f);
 close(g);
end;
Begin
 doc;
 d:=0;
 for i:=a to b do
  If kt(i)=true then d:=d+1;
  if d<>0 then
   write(g,d);
   dong;
End.
