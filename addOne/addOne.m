function y = addOne(x)
% Copyright 2014 - 2016 The MathWorks, Inc.

%#codegen
% Single type output. This configuration should fail the integration test.
%y = single(x + 1);

% Double type output. This configuration should pass the integration test.
y = x + 1;
end