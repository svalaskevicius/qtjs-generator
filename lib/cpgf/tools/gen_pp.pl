#  cpgf Library
#  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
#  All rights reserved.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.


# generate preprocess macros

use strict;
use warnings;

my $maxLevels = 60;
my $repeatMaxRecursiveLevels = 3;

my $maxGainName = "GPP_MAX_LIMIT";
my $repeatPrefix = "I_GPP_REPEAT_";

my $decPrefix = "I_GPP_DEC_";
my $incPrefix = "I_GPP_INC_";

my $boolPrefix = "I_GPP_BOOL_";

my $minSpace = "   ";

&doMain;

sub outputLine
{
	my ($s) = @_;

	print $s . "\n";
}

sub doMain
{
	&outputLine("//auto generated macros -- begin");
	&outputLine("");

	&outputLine("#define $maxGainName        ${maxLevels}");
	&outputLine("");

	for(my $r = 1; $r <= $repeatMaxRecursiveLevels; ++$r) {
		my $prefix = $repeatPrefix . $r . '_';
		&generate_repeat($prefix, $maxLevels);

		&outputLine("");
	}
	
	&generate_dec($decPrefix, $maxLevels);
	&outputLine("");
	
	&generate_inc($incPrefix, $maxLevels);
	&outputLine("");
	
	&generate_bool($boolPrefix, $maxLevels);
	
	&outputLine("");
	&outputLine("//auto generated macros -- end");
}

sub getSpace
{
	my ($level) = @_;
	my $s = $minSpace;
	
	$s .= ' ' if($level < 10);
	$s .= ' ' if($level < 100);
	$s .= ' ' if($level < 1000);
	
	return $s;
}

sub generate_repeat
{
	my ($prefix, $levels) = @_;
	
	my $space = &getSpace(2);
	
	&outputLine("#define ${prefix}0(M, P)");
	&outputLine("#define ${prefix}1(M, P) ${space} M(0, P)");
	
	for(my $i = 2; $i <= $levels; ++$i) {
		my $k = $i - 1;
		$space = &getSpace($i);
		&outputLine("#define ${prefix}${i}(M, P) ${space} ${prefix}${k}(M, P) M(${k}, P)");
	}
}

sub generate_dec
{
	my ($prefix, $levels) = @_;
	
	for(my $i = 1; $i <= $levels; ++$i) {
		my $k = $i - 1;
		my $space = &getSpace($i);
		&outputLine("#define ${prefix}${i} ${space} ${k}");
	}
}


sub generate_inc
{
	my ($prefix, $levels) = @_;
	
	for(my $i = 0; $i < $levels; ++$i) {
		my $k = $i + 1;
		my $space = &getSpace($i);
		&outputLine("#define ${prefix}${i} ${space} ${k}");
	}
}

sub generate_bool
{
	my ($prefix, $levels) = @_;
	
	++$levels;

	for(my $i = 0; $i < $levels; ++$i) {
		my $k = $i > 0 ? 1 : 0;
		my $space = &getSpace($i);
		&outputLine("#define ${prefix}${i} ${space} ${k}");
	}
}
