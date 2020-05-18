% Run local unit tests
runtests('TestAddOne')

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.FilePartitionMethod = 'SingleFile';
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'addOne'.
ARGS = cell(1,1);
ARGS{1} = cell(1,1);
ARGS{1}{1} = coder.typeof(0);

%% Invoke MATLAB Coder.
codegen -config cfg addOne -args ARGS{1}

%% Run the unit tests using the generated MEX file
coder.runTest('TestAddOne', 'addOne');