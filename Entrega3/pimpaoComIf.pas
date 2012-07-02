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
	
	if a < b + (c + 1)  then
		begin
			p1 (a; c);
			c := 1.2 * 2 + a;
		end
	else
		c := 12;

	while b < 19 do
	begin
		b := b + 1;
	end;
	
	writeln(c); 
end.
