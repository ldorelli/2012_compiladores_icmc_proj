program ursinhoPimpao; 
	var a, b: integer; 
	var c: real;

	procedure p1(x : integer; y : real);
	var a : integer;
	begin
		a := x;
		y := a * x; 
	end;

begin
	readln(a,b); 
	c:=5;
	
	repeat
	begin 
		a:=a+1; 
		c:=c*a;
	end; 
	until a < c;
	
	a := 1 * 2 + -a;
	writeln(c); 
end.
