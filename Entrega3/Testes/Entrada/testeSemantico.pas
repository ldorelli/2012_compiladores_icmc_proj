program testecerto;
{ declaracao de constantes }
const constante := 3;
const constante2 := 3.57;
{ declaracao de variaveis }
var variavel : integer;
var variavel2, variavel4 : real;
{ declaracao de procedimentos }
{ procedimento sem parametros }
procedure procedimento;
var variavel3 : char;
begin
	readln(variavel);
	if variavel > 3 then
		begin
			variavel2 := constante2;
			variavel := constante;
		end
	else
		while variavel < 3 do
			begin
				variavel := variavel + (variavel + 2)/3;
				variavel := constante2/3 +  variavel;
			end;
	writeln (variavel3);
end;
{ inicio do programa }
begin
	procedimento;
	procedimento2 (variavel; variavel; variavel2);
	variavel := variavel * (variavel2 + 3*variavel) / 5;
end.

