Info<< "Reading fields S V E I R\n" << endl;
volScalarField S
(
    IOobject
    (
        "S",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volScalarField V
(
    IOobject
    (
        "V",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volScalarField E
(
    IOobject
    (
        "E",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volScalarField I
(
    IOobject
    (
        "I",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volScalarField R
(
    IOobject
    (
        "R",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

Info<< "Reading transportProperties\n" << endl;
 
IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);
 
dimensionedScalar DS
(
    transportProperties.lookup("DS")
);

dimensionedScalar DV
(
    transportProperties.lookup("DV")
);

dimensionedScalar DE
(
    transportProperties.lookup("DE")
);

dimensionedScalar DI
(
    transportProperties.lookup("DI")
);

dimensionedScalar DR
(
    transportProperties.lookup("DR")
);

dimensionedScalar Bsv
(
    transportProperties.lookup("Bsv")
);

dimensionedScalar Bsi
(
    transportProperties.lookup("Bsi")
);

dimensionedScalar Bse
(
    transportProperties.lookup("Bse")
);

dimensionedScalar Bvi
(
    transportProperties.lookup("Bvi")
);

dimensionedScalar Bve
(
    transportProperties.lookup("Bve")
);

dimensionedScalar Bei
(
    transportProperties.lookup("Bei")
);

dimensionedScalar Bir
(
    transportProperties.lookup("Bir")
);

dimensionedScalar Brs
(
    transportProperties.lookup("Brs")
);

dimensionedScalar Bre
(
    transportProperties.lookup("Bre")
);

dimensionedScalar Bvs
(
    transportProperties.lookup("Brs")
);
