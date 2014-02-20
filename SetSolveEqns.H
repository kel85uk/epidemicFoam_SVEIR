volScalarField sourceS
(
    -Bsv*S - Bsi*S*I - Bse*S + Brs*R + Bvs*V
);
fvScalarMatrix SEqn
(
     fvm::ddt(S)
  == fvm::laplacian(DS, S)
    +fvc::Sp(1,sourceS)
);
volScalarField sourceV
(
    Bsv*S - Bvi*V - Bve*V - Bvs*V
);
fvScalarMatrix VEqn
(
     fvm::ddt(V)
  == fvm::laplacian(DV, V)
    +fvc::Sp(1,sourceV)
);
volScalarField sourceE
(
    Bse*S + Bve*V - Bei*E + Bre*R
);
fvScalarMatrix EEqn
(
     fvm::ddt(E)
  == fvm::laplacian(DE, E)
    +fvc::Sp(1,sourceE)
);
volScalarField sourceI
(
    Bsi*S*I + Bvi*V + Bei*E - Bir*R*I
);
fvScalarMatrix IEqn
(
     fvm::ddt(I)
  == fvm::laplacian(DI, I)
    +fvc::Sp(1,sourceI)
);
volScalarField sourceR
(
    Bir*R*I - Brs*R - Bre*R
);
fvScalarMatrix REqn
(
     fvm::ddt(R)
  == fvm::laplacian(DR, R)
    +fvc::Sp(1,sourceR)
);

SEqn.solve();
VEqn.solve();
EEqn.solve();
IEqn.solve();
REqn.solve();
