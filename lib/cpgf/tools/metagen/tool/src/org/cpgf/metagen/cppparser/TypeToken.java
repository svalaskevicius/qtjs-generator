/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


package org.cpgf.metagen.cppparser;

public class TypeToken {
	private String token;
	private EnumTypeTokenKind kind;

	public TypeToken(String token) {
		this.token = token;
		this.kind = ParserUtil.getTypeTokenKind(token);
	}

	public String getToken() {
		return token;
	}
	
	public void setToken(String token) {
		this.token = token;
	}

	public EnumTypeTokenKind getKind() {
		return kind;
	}

	public boolean isPointerOrReference() {
		return this.getKind() == EnumTypeTokenKind.Pointer
			|| this.getKind() == EnumTypeTokenKind.Reference
			|| this.getKind() == EnumTypeTokenKind.RValueReference;
	}

	public boolean isConstOrVolatile() {
		return this.getKind() == EnumTypeTokenKind.Const
			|| this.getKind() == EnumTypeTokenKind.Volatile;
	}

	public boolean isLeftBracket() {
		return this.getKind() == EnumTypeTokenKind.LeftAngle
			|| this.getKind() == EnumTypeTokenKind.LeftParenthesis
			|| this.getKind() == EnumTypeTokenKind.LeftSquare;
	}

	public boolean isRightBracket() {
		return this.getKind() == EnumTypeTokenKind.RightAngle
			|| this.getKind() == EnumTypeTokenKind.RightParenthesis
			|| this.getKind() == EnumTypeTokenKind.RightSquare;
	}

	public boolean isLiteralText() {
		return this.getKind() == EnumTypeTokenKind.Const
			|| this.getKind() == EnumTypeTokenKind.Volatile
			|| this.getKind() == EnumTypeTokenKind.Symbol;
	}

}
