classdef TestTimesTwo < matlab.unittest.TestCase
    % Copyright 2014 - 2016 The MathWorks, Inc.
    
    methods ( Test )
        
        function reallyTimesTwo( testCase )
            x = 1;
            y = timesTwo( x );
            testCase.verifyEqual( y, 4 );
        end
        
        function timesFraction( testCase )
            x = pi;
            y = timesTwo( x );
            testCase.verifyEqual( y, (pi+1)*2 );
        end
    end
end