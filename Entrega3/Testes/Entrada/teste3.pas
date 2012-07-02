prog prog; { program escrito errado }
{ declaracao de variaveis }
const pi=3.14; { constante declarada depois de variavel }
var x: integer;
var y:real;
{ declaracao de procedimento }
procedure proc1 (x:real, y:real);
begin
	readln(x,y);
	if x > 3 then
		x := 3
	else
		x := 4 { faltou ; }
end;
procedure proc2 (x:integer);
begin
	writeln(x);
	while x/y > 3 do
		x := 3x + 2;
end;
begin
	proc1 (x; y);
	proc2;
end.
