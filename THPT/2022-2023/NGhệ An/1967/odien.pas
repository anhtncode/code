program bai2;
const   fi= 'odien.inp';
        fo= 'odien.out';
var     b:array[0..200001] of int64;
        sum:int64;
        i,j,m,n:longint;
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
procedure sort(q,w:longint);
var
        x,tg:longint;
        begin
                i:=q;
                j:=w;
                x:=b[(i+j) div 2];
                repeat
                        while b[i] < x do inc(i);
                        while b[j] > x do dec(j);
                        if (b[i]>=x) or (b[j]<=x) then
                        begin
                                tg:=b[i];
                                b[i]:=b[j];
                                b[j]:=tg;
                                inc(i);
                                dec(j);
                        end;
                until i>=j;
                if q<i then sort(q,i);
                if j<w then sort(j,w);
        end;
procedure xuly;
begin
        readln(n,m);
        for i:=1 to n do
        read(b[i]);
        sort(1,n);
        sum:=b[n];
        if sum >=m then
        begin
                write(sum);
                exit;
        end
        else
        begin
                for i:=n downto 1 do
                begin
                        sum:=sum+b[i]-1;
                        if sum >=m then
                        begin
                                write(sum);
                                exit;
                        end;
                end;
        end;
end;
BEGIN
        MO;
        XULY;
        DONG;
END.
