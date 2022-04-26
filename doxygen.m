%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%
%% Copyright (C) 2022 Kevin Matthes
%%
%% This program is free software; you can redistribute it and/or modify
%% it under the terms of the GNU General Public License as published by
%% the Free Software Foundation; either version 2 of the License, or
%% (at your option) any later version.
%%
%% This program is distributed in the hope that it will be useful,
%% but WITHOUT ANY WARRANTY; without even the implied warranty of
%% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%% GNU General Public License for more details.
%%
%% You should have received a copy of the GNU General Public License along
%% with this program; if not, write to the Free Software Foundation, Inc.,
%% 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
%%
%%%%
%%
%%  FILE
%%      doxygen.m
%%
%%  BRIEF
%%      Create a complete documentation from sources using `doxygen`.
%%
%%  AUTHOR
%%      Kevin Matthes
%%
%%  COPYRIGHT
%%      (C) 2022 Kevin Matthes.
%%      This file is licensed GPL 2 as of June 1991.
%%
%%  DATE
%%      2022
%%
%%  NOTE
%%      See `LICENSE' for full license.
%%      See `README.md' for project details.
%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%
%%
%% Variables.
%%
%%%%

% Software.
software.compiler.self  = ' doxygen ';

software.make.self  = ' make ';
software.make.flags = ' -C ';
software.make.call  = [software.make.self software.make.flags];



% Directories.
directories.doxygen.make    = '';



% Files.
files.refman.pdf    = [directories.doxygen.make 'refman.pdf'];
files.refman.tex    = [directories.doxygen.make 'refman.tex'];

files.self      = 'doxygen.m';
files.source    = '';
files.target    = '';



% Control flow.
banner  = ['[ ' files.self ' ] '];



% Call adjustment.
software.compiler.call  = [software.compiler.self files.source];

software.make.call  = [software.make.call directories.doxygen.make];



%%%%
%%
%% Build steps.
%%
%%%%

% Begin build instruction.
disp ([banner 'Begin build instruction.']);



% Call Doxygen.
disp ([banner 'Compile Doxygen documentation ...']);

disp (software.compiler.call);
software.compiler.result = system (software.compiler.call);

disp ([banner 'Done.']);



% Compile LaTeX manual, if possible.
if ~ software.compiler.result && length (glob (files.refman.tex)) && isunix;
    disp ([banner 'Compile LaTeX manual ...']);

    disp (software.make.call);
    unix (software.make.call);

    if length (glob (files.refman.pdf));
        movefile (files.refman.pdf, files.target, 'f');
    end;

    disp ([banner 'Done.']);
end;



% End build instruction.
disp ([banner 'End build instruction.']);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
