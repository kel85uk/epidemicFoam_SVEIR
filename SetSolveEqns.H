volScalarField sourceS
(
    -B1*S*E + (alpha-B2)*S*I + delta*R + theta*V + r
);
fvScalarMatrix SEqn
(
    fvm::ddt(S)
  - fvm::laplacian(D1, S)
  - sourceS
  == fvm::Sp(-(phi+r),S)
);
volScalarField sourceV
(
    -B3*E*V + (alpha-B4)*V*I + phi*S
);
fvScalarMatrix VEqn
(
    fvm::ddt(V)
  - fvm::laplacian(D2, V)
  - sourceV
  == fvm::Sp(-(r+theta),V)
);
volScalarField sourceE
(
    B1*E*S + B2*I*S + B3*E*V + B4*I*V + alpha*I*E
);
fvScalarMatrix EEqn
(
    fvm::ddt(E)
  - fvm::laplacian(D3, E)
  - sourceE
  == fvm::Sp(-w1,E)
);
volScalarField sourceI
(
    sigma*E + alpha*I*I
);
fvScalarMatrix IEqn
(
    fvm::ddt(I)
  - fvm::laplacian(D4, I)
  - sourceI
  == fvm::Sp(-w2,I)
);
volScalarField sourceR
(
    kappa*E + gamma*I + alpha*I*R
);
fvScalarMatrix REqn
(
    fvm::ddt(R)
  - fvm::laplacian(D5, R)
  - sourceR
  == fvm::Sp(-(r+delta),R)
);
SEqn.relax();
VEqn.relax();
EEqn.relax();
IEqn.relax();
REqn.relax();
SEqn.solve();
VEqn.solve();
EEqn.solve();
IEqn.solve();
REqn.solve();
