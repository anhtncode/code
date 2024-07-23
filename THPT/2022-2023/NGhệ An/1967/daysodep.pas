program bai3;
const   fi= 'daysodep.inp';
        fo= 'daysodep.out';
var     a,C,L : array[0..200001] of int64 ;
        u,v,dem,i,j,k,n:longint;
        x,y,p:int64;
procedure mo;
begin
        assign(input,fi);
        reset(input);
        assign(output,fo);
        rewrite(output);
end;
procedure dong;
begin
        close(input);
        close(output);
end;
procedure xuly;
begin
        readln(n,k);
        u:=0;
        v:=0;
        C[0]:=0;
        L[0]:=0;
        for i:=1 to n do
        begin
                read(a[i]);
                if a[i] mod 2 = 0 then
                begin
                        inc(u);
                        C[u]:=C[u-1]+a[i];
                        inc(v);
                        L[v]:=L[v-1];
                end
                else
                begin
                        inc(v);
                        L[v]:=L[v-1]+a[i];
                        inc(u);
                        C[u]:=C[u-1];
                end;
        end;

                if (C[u]=0) or (L[v]=0) then
                begin
                        write(0);
                        exit;
                end
                else
                for i:=1 to n-1 do
                for j:=i+1 to n do
                begin
                        x:=C[j]-C[i-1];
                        y:=L[j]-L[i-1];
                        if (x-y>=0) and (x-y<=k) then inc(dem);
                end;
                write(dem);

end;
BEGIN
        MO;
        XULY;
        DONG;
END.
