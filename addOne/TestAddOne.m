classdef TestAddOne < matlab.unittest.TestCase
    % Copyright 2014 - 2016 The MathWorks, Inc.
    
    methods ( Test )
        
        function singleOrDouble( testCase )
            x = 1;
            y = addOne( x );
            isSingle = isa(y,'single');
            isDouble = isa(y,'double');
            testCase.verifyTrue( isSingle | isDouble );
        end
        
        function addsFraction( testCase )
            x = pi;
            y = addOne( x );
            if isa(y,'single') == true
                z = single(x + 1);
            elseif isa(y,'double') == true
                z = double(x + 1);
            else
                z = 0;
            end
            testCase.verifyEqual( y, z );
        end
    end
end