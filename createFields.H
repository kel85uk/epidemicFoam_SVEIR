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
 
dimensionedScalar D1
(
    transportProperties.lookup("D1")
);

dimensionedScalar D2
(
    transportProperties.lookup("D2")
);

dimensionedScalar D3
(
    transportProperties.lookup("D3")
);

dimensionedScalar D4
(
    transportProperties.lookup("D4")
);

dimensionedScalar D5
(
    transportProperties.lookup("D5")
);

dimensionedScalar B
(
    transportProperties.lookup("B")
);

dimensionedScalar BE
(
    transportProperties.lookup("BE")
);

dimensionedScalar BI
(
    transportProperties.lookup("BI")
);

dimensionedScalar BV
(
    transportProperties.lookup("BV")
);

dimensionedScalar r
(
    transportProperties.lookup("r")
);

dimensionedScalar alpha
(
    transportProperties.lookup("alpha")
);

dimensionedScalar sigma
(
    transportProperties.lookup("sigma")
);

dimensionedScalar gamma
(
    transportProperties.lookup("gamma")
);

dimensionedScalar delta
(
    transportProperties.lookup("delta")
);

dimensionedScalar mu
(
    transportProperties.lookup("mu")
);

dimensionedScalar kappa
(
    transportProperties.lookup("kappa")
);

dimensionedScalar theta
(
    transportProperties.lookup("theta")
);

dimensionedScalar phi
(
    transportProperties.lookup("phi")
);

dimensionedScalar B1
(
	B*BE
);

dimensionedScalar B2
(
	B*BI
);

dimensionedScalar B3
(
	B*BE*BV
);

dimensionedScalar B4
(
	B*BI*BV
);

dimensionedScalar w1
(
	r + kappa + sigma
);

dimensionedScalar w2
(
	r + alpha + gamma
);
