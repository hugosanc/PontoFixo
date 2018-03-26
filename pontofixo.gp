set title "{/Arial Convergência de x0}"
set xlabel "{/Arial Número de iterações}"
set ylabel "{/Arial Valor de x0}" 
set key right bottom
set border lw 1.5
plot "x15.dat" t "x0 = 1.50" w l lw 2, "x075.dat" t "x0 = 0.75" w l lw 2
