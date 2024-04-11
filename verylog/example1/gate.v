module gate(A,B,C,D,E,F,Y)
input A,B,C,D,E,F;
output wire y;

wire t1,t2,t3;


nand G1 (t1,A,B);
and G2 (t2 ,C,~B,D);	
nor G3 (t3 ,E,F);
nand G4 (Y,t1,t2,t3);
endmodule
