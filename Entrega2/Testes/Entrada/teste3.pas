prog prog; { program escrito errado }
{ declaracao de variaveis }
var x: integer;
char x; { declaracao em C }
const y=3; { constante declarada depois de variavel }
var y:char { falta ; }
{ declaracao de procedimento }
procedure proc (int x, int y); { parametros passados em C }
begin
	readln(x);
	if x > 3 then
		x := 3
	else
		x := 4 { faltou ; }
end;
procedure proc (x:integer;) { faltou mais parametros e o ) }
begin
	writeln(x);
	while x > 3 { faltou do }
		x := x + 2;
end;
begin
	proc (); { nao tem parametros }
end.
