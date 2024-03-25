local ClasseBase = {};
ClasseBase.__index = ClasseBase;

function ClasseBase.new ()
    local self = {};

    setmetatable(self, ClasseBase);

    return self;
end

function ClasseBase.falar ()
    print("Olá, Mundo!");
end

local ClasseDerivada = {};
ClasseDerivada.__index = ClasseDerivada;

function ClasseDerivada.new ()
    local self = ClasseBase.new();

    setmetatable(self, ClasseDerivada); -- Inheritance

    return self;
end

function ClasseDerivada.falar ()
    print("O método 'falar()' foi substituído pela classe derivada");
end

local obj = ClasseDerivada.new();

obj.falar();
