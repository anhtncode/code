program bai1;
const   fi= 'khonghoanhao.inp';
        fo= 'khonghoanhao.out';
var     k,x,sum,dem,a,b:longint;
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
procedure check;
begin
        read(a,b);
        k:=1;
        sum:=0;
        dem:=0;
        for x:=a to b do
        begin
                while k <= x div k do
                begin
                        if x mod k = 0 then
                        begin
                                sum:=sum+k;
                                if x <> x div k then
                                if k <> x div k then sum:=sum + x div k;
                        end;
                        inc(k);
                end;
                if sum > x then inc(dem);
                k:=1;
                sum:=0;
        end;
        write(dem);
end;
procedure xuly;
begin
        check;
end;
BEGIN
        MO;
        XULY;
        DONG;
END.
