		program fatorial;
		var n: integer;
		procedure fat(x : integer);
		var resultado: integer;
		begin
			resultado := 1;
			while x > 1 do
			begin
				resultado := resultado * x;
				x := x - 1;
			end;

			writeln(resultado);
		end;

		begin
			readln(n);
			fat(n);
		end.
