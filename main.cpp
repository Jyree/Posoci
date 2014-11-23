#include "pasoci.h"

Program
begin
    longint i = 1;
    For(i) to 100 do
    begin
        longint j = 1;
        For(j) to 100 do
            If i == j Or i*i == j then
                writeln(i*j);
    end;
end
