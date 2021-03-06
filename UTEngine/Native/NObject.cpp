
#include "Precomp.h"
#include "NObject.h"
#include "VM/NativeFunc.h"

void NObject::RegisterFunctions()
{
	RegisterVMNativeFunc_2("Object", "Abs", &NObject::Abs, 186);
	RegisterVMNativeFunc_2("Object", "AddAdd_Byte", &NObject::AddAdd_Byte, 139);
	RegisterVMNativeFunc_2("Object", "AddAdd_Int", &NObject::AddAdd_Int, 165);
	RegisterVMNativeFunc_2("Object", "AddAdd_PreByte", &NObject::AddAdd_PreByte, 137);
	RegisterVMNativeFunc_2("Object", "AddAdd_PreInt", &NObject::AddAdd_PreInt, 163);
	RegisterVMNativeFunc_3("Object", "AddEqual_ByteByte", &NObject::AddEqual_ByteByte, 135);
	RegisterVMNativeFunc_3("Object", "AddEqual_FloatFloat", &NObject::AddEqual_FloatFloat, 184);
	RegisterVMNativeFunc_3("Object", "AddEqual_IntInt", &NObject::AddEqual_IntInt, 161);
	RegisterVMNativeFunc_3("Object", "AddEqual_RotatorRotator", &NObject::AddEqual_RotatorRotator, 318);
	RegisterVMNativeFunc_3("Object", "AddEqual_VectorVector", &NObject::AddEqual_VectorVector, 223);
	RegisterVMNativeFunc_3("Object", "Add_FloatFloat", &NObject::Add_FloatFloat, 174);
	RegisterVMNativeFunc_3("Object", "Add_IntInt", &NObject::Add_IntInt, 146);
	RegisterVMNativeFunc_3("Object", "Add_RotatorRotator", &NObject::Add_RotatorRotator, 316);
	RegisterVMNativeFunc_3("Object", "Add_VectorVector", &NObject::Add_VectorVector, 215);
	RegisterVMNativeFunc_3("Object", "AndAnd_BoolBool", &NObject::AndAnd_BoolBool, 130);
	RegisterVMNativeFunc_3("Object", "And_IntInt", &NObject::And_IntInt, 156);
	RegisterVMNativeFunc_2("Object", "Asc", &NObject::Asc, 237);
	RegisterVMNativeFunc_3("Object", "At_StrStr", &NObject::At_StrStr, 168);
	RegisterVMNativeFunc_2("Object", "Atan", &NObject::Atan, 190);
	RegisterVMNativeFunc_2("Object", "Caps", &NObject::Caps, 235);
	RegisterVMNativeFunc_2("Object", "Chr", &NObject::Chr, 236);
	RegisterVMNativeFunc_4("Object", "Clamp", &NObject::Clamp, 251);
	RegisterVMNativeFunc_3("Object", "ClassIsChildOf", &NObject::ClassIsChildOf, 258);
	RegisterVMNativeFunc_3("Object", "ComplementEqual_FloatFloat", &NObject::ComplementEqual_FloatFloat, 210);
	RegisterVMNativeFunc_3("Object", "ComplementEqual_StrStr", &NObject::ComplementEqual_StrStr, 124);
	RegisterVMNativeFunc_2("Object", "Complement_PreInt", &NObject::Complement_PreInt, 141);
	RegisterVMNativeFunc_3("Object", "Concat_StrStr", &NObject::Concat_StrStr, 112);
	RegisterVMNativeFunc_2("Object", "Cos", &NObject::Cos, 188);
	RegisterVMNativeFunc_3("Object", "Cross_VectorVector", &NObject::Cross_VectorVector, 220);
	RegisterVMNativeFunc_1("Object", "Disable", &NObject::Disable, 118);
	RegisterVMNativeFunc_3("Object", "DivideEqual_ByteByte", &NObject::DivideEqual_ByteByte, 134);
	RegisterVMNativeFunc_3("Object", "DivideEqual_FloatFloat", &NObject::DivideEqual_FloatFloat, 183);
	RegisterVMNativeFunc_3("Object", "DivideEqual_IntFloat", &NObject::DivideEqual_IntFloat, 160);
	RegisterVMNativeFunc_3("Object", "DivideEqual_RotatorFloat", &NObject::DivideEqual_RotatorFloat, 291);
	RegisterVMNativeFunc_3("Object", "DivideEqual_VectorFloat", &NObject::DivideEqual_VectorFloat, 222);
	RegisterVMNativeFunc_3("Object", "Divide_FloatFloat", &NObject::Divide_FloatFloat, 172);
	RegisterVMNativeFunc_3("Object", "Divide_IntInt", &NObject::Divide_IntInt, 145);
	RegisterVMNativeFunc_3("Object", "Divide_RotatorFloat", &NObject::Divide_RotatorFloat, 289);
	RegisterVMNativeFunc_3("Object", "Divide_VectorFloat", &NObject::Divide_VectorFloat, 214);
	RegisterVMNativeFunc_3("Object", "Dot_VectorVector", &NObject::Dot_VectorVector, 219);
	RegisterVMNativeFunc_4("Object", "DynamicLoadObject", &NObject::DynamicLoadObject, 0);
	RegisterVMNativeFunc_1("Object", "Enable", &NObject::Enable, 117);
	RegisterVMNativeFunc_3("Object", "EqualEqual_BoolBool", &NObject::EqualEqual_BoolBool, 242);
	RegisterVMNativeFunc_3("Object", "EqualEqual_FloatFloat", &NObject::EqualEqual_FloatFloat, 180);
	RegisterVMNativeFunc_3("Object", "EqualEqual_IntInt", &NObject::EqualEqual_IntInt, 154);
	RegisterVMNativeFunc_3("Object", "EqualEqual_NameName", &NObject::EqualEqual_NameName, 254);
	RegisterVMNativeFunc_3("Object", "EqualEqual_ObjectObject", &NObject::EqualEqual_ObjectObject, 114);
	RegisterVMNativeFunc_3("Object", "EqualEqual_RotatorRotator", &NObject::EqualEqual_RotatorRotator, 142);
	RegisterVMNativeFunc_3("Object", "EqualEqual_StrStr", &NObject::EqualEqual_StrStr, 122);
	RegisterVMNativeFunc_3("Object", "EqualEqual_VectorVector", &NObject::EqualEqual_VectorVector, 217);
	RegisterVMNativeFunc_2("Object", "Exp", &NObject::Exp, 191);
	RegisterVMNativeFunc_4("Object", "FClamp", &NObject::FClamp, 246);
	RegisterVMNativeFunc_3("Object", "FMax", &NObject::FMax, 245);
	RegisterVMNativeFunc_3("Object", "FMin", &NObject::FMin, 244);
	RegisterVMNativeFunc_1("Object", "FRand", &NObject::FRand, 195);
	RegisterVMNativeFunc_4("Object", "GetAxes", &NObject::GetAxes, 229);
	RegisterVMNativeFunc_3("Object", "GetEnum", &NObject::GetEnum, 0);
	RegisterVMNativeFunc_2("Object", "GetPropertyText", &NObject::GetPropertyText, 0);
	RegisterVMNativeFunc_1("Object", "GetStateName", &NObject::GetStateName, 284);
	RegisterVMNativeFunc_4("Object", "GetUnAxes", &NObject::GetUnAxes, 230);
	RegisterVMNativeFunc_2("Object", "GotoState", &NObject::GotoState, 113);
	RegisterVMNativeFunc_3("Object", "GreaterEqual_FloatFloat", &NObject::GreaterEqual_FloatFloat, 179);
	RegisterVMNativeFunc_3("Object", "GreaterEqual_IntInt", &NObject::GreaterEqual_IntInt, 153);
	RegisterVMNativeFunc_3("Object", "GreaterEqual_StrStr", &NObject::GreaterEqual_StrStr, 121);
	RegisterVMNativeFunc_3("Object", "GreaterGreaterGreater_IntInt", &NObject::GreaterGreaterGreater_IntInt, 196);
	RegisterVMNativeFunc_3("Object", "GreaterGreater_IntInt", &NObject::GreaterGreater_IntInt, 149);
	RegisterVMNativeFunc_3("Object", "GreaterGreater_VectorRotator", &NObject::GreaterGreater_VectorRotator, 276);
	RegisterVMNativeFunc_3("Object", "Greater_FloatFloat", &NObject::Greater_FloatFloat, 177);
	RegisterVMNativeFunc_3("Object", "Greater_IntInt", &NObject::Greater_IntInt, 151);
	RegisterVMNativeFunc_3("Object", "Greater_StrStr", &NObject::Greater_StrStr, 116);
	RegisterVMNativeFunc_3("Object", "InStr", &NObject::InStr, 126);
	RegisterVMNativeFunc_3("Object", "Invert", &NObject::Invert, 227);
	RegisterVMNativeFunc_2("Object", "IsA", &NObject::IsA, 303);
	RegisterVMNativeFunc_2("Object", "IsInState", &NObject::IsInState, 281);
	RegisterVMNativeFunc_3("Object", "Left", &NObject::Left, 128);
	RegisterVMNativeFunc_2("Object", "Len", &NObject::Len, 125);
	RegisterVMNativeFunc_4("Object", "Lerp", &NObject::Lerp, 247);
	RegisterVMNativeFunc_3("Object", "LessEqual_FloatFloat", &NObject::LessEqual_FloatFloat, 178);
	RegisterVMNativeFunc_3("Object", "LessEqual_IntInt", &NObject::LessEqual_IntInt, 152);
	RegisterVMNativeFunc_3("Object", "LessEqual_StrStr", &NObject::LessEqual_StrStr, 120);
	RegisterVMNativeFunc_3("Object", "LessLess_IntInt", &NObject::LessLess_IntInt, 148);
	RegisterVMNativeFunc_3("Object", "LessLess_VectorRotator", &NObject::LessLess_VectorRotator, 275);
	RegisterVMNativeFunc_3("Object", "Less_FloatFloat", &NObject::Less_FloatFloat, 176);
	RegisterVMNativeFunc_3("Object", "Less_IntInt", &NObject::Less_IntInt, 150);
	RegisterVMNativeFunc_3("Object", "Less_StrStr", &NObject::Less_StrStr, 115);
	RegisterVMNativeFunc_4("Object", "Localize", &NObject::Localize, 0);
	RegisterVMNativeFunc_2("Object", "Log", &NObject::Log, 231);
	RegisterVMNativeFunc_2("Object", "Loge", &NObject::Loge, 192);
	RegisterVMNativeFunc_3("Object", "Max", &NObject::Max, 250);
	RegisterVMNativeFunc_4("Object", "Mid", &NObject::Mid, 127);
	RegisterVMNativeFunc_3("Object", "Min", &NObject::Min, 249);
	RegisterVMNativeFunc_3("Object", "MirrorVectorByNormal", &NObject::MirrorVectorByNormal, 300);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_ByteByte", &NObject::MultiplyEqual_ByteByte, 133);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_FloatFloat", &NObject::MultiplyEqual_FloatFloat, 182);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_IntFloat", &NObject::MultiplyEqual_IntFloat, 159);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_RotatorFloat", &NObject::MultiplyEqual_RotatorFloat, 290);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_VectorFloat", &NObject::MultiplyEqual_VectorFloat, 221);
	RegisterVMNativeFunc_3("Object", "MultiplyEqual_VectorVector", &NObject::MultiplyEqual_VectorVector, 297);
	RegisterVMNativeFunc_3("Object", "MultiplyMultiply_FloatFloat", &NObject::MultiplyMultiply_FloatFloat, 170);
	RegisterVMNativeFunc_3("Object", "Multiply_FloatFloat", &NObject::Multiply_FloatFloat, 171);
	RegisterVMNativeFunc_3("Object", "Multiply_FloatRotator", &NObject::Multiply_FloatRotator, 288);
	RegisterVMNativeFunc_3("Object", "Multiply_FloatVector", &NObject::Multiply_FloatVector, 213);
	RegisterVMNativeFunc_3("Object", "Multiply_IntInt", &NObject::Multiply_IntInt, 144);
	RegisterVMNativeFunc_3("Object", "Multiply_RotatorFloat", &NObject::Multiply_RotatorFloat, 287);
	RegisterVMNativeFunc_3("Object", "Multiply_VectorFloat", &NObject::Multiply_VectorFloat, 212);
	RegisterVMNativeFunc_3("Object", "Multiply_VectorVector", &NObject::Multiply_VectorVector, 296);
	RegisterVMNativeFunc_2("Object", "Normal", &NObject::Normal, 226);
	RegisterVMNativeFunc_2("Object", "Normalize", &NObject::Normalize, 0);
	RegisterVMNativeFunc_3("Object", "NotEqual_BoolBool", &NObject::NotEqual_BoolBool, 243);
	RegisterVMNativeFunc_3("Object", "NotEqual_FloatFloat", &NObject::NotEqual_FloatFloat, 181);
	RegisterVMNativeFunc_3("Object", "NotEqual_IntInt", &NObject::NotEqual_IntInt, 155);
	RegisterVMNativeFunc_3("Object", "NotEqual_NameName", &NObject::NotEqual_NameName, 255);
	RegisterVMNativeFunc_3("Object", "NotEqual_ObjectObject", &NObject::NotEqual_ObjectObject, 119);
	RegisterVMNativeFunc_3("Object", "NotEqual_RotatorRotator", &NObject::NotEqual_RotatorRotator, 203);
	RegisterVMNativeFunc_3("Object", "NotEqual_StrStr", &NObject::NotEqual_StrStr, 123);
	RegisterVMNativeFunc_3("Object", "NotEqual_VectorVector", &NObject::NotEqual_VectorVector, 218);
	RegisterVMNativeFunc_2("Object", "Not_PreBool", &NObject::Not_PreBool, 129);
	RegisterVMNativeFunc_3("Object", "OrOr_BoolBool", &NObject::OrOr_BoolBool, 132);
	RegisterVMNativeFunc_3("Object", "Or_IntInt", &NObject::Or_IntInt, 158);
	RegisterVMNativeFunc_4("Object", "OrthoRotation", &NObject::OrthoRotation, 0);
	RegisterVMNativeFunc_3("Object", "Percent_FloatFloat", &NObject::Percent_FloatFloat, 173);
	RegisterVMNativeFunc_2("Object", "Rand", &NObject::Rand, 167);
	RegisterVMNativeFunc_3("Object", "RandRange", &NObject::RandRange, 1033);
	RegisterVMNativeFunc_0("Object", "ResetConfig", &NObject::ResetConfig, 0);
	RegisterVMNativeFunc_3("Object", "Right", &NObject::Right, 234);
	RegisterVMNativeFunc_2("Object", "RotRand", &NObject::RotRand, 320);
	RegisterVMNativeFunc_0("Object", "SaveConfig", &NObject::SaveConfig, 536);
	RegisterVMNativeFunc_2("Object", "SetPropertyText", &NObject::SetPropertyText, 0);
	RegisterVMNativeFunc_2("Object", "Sin", &NObject::Sin, 187);
	RegisterVMNativeFunc_4("Object", "Smerp", &NObject::Smerp, 248);
	RegisterVMNativeFunc_2("Object", "Sqrt", &NObject::Sqrt, 193);
	RegisterVMNativeFunc_2("Object", "Square", &NObject::Square, 194);
	RegisterVMNativeFunc_0("Object", "StaticSaveConfig", &NObject::StaticSaveConfig, 0);
	RegisterVMNativeFunc_3("Object", "SubtractEqual_ByteByte", &NObject::SubtractEqual_ByteByte, 136);
	RegisterVMNativeFunc_3("Object", "SubtractEqual_FloatFloat", &NObject::SubtractEqual_FloatFloat, 185);
	RegisterVMNativeFunc_3("Object", "SubtractEqual_IntInt", &NObject::SubtractEqual_IntInt, 162);
	RegisterVMNativeFunc_3("Object", "SubtractEqual_RotatorRotator", &NObject::SubtractEqual_RotatorRotator, 319);
	RegisterVMNativeFunc_3("Object", "SubtractEqual_VectorVector", &NObject::SubtractEqual_VectorVector, 224);
	RegisterVMNativeFunc_2("Object", "SubtractSubtract_Byte", &NObject::SubtractSubtract_Byte, 140);
	RegisterVMNativeFunc_2("Object", "SubtractSubtract_Int", &NObject::SubtractSubtract_Int, 166);
	RegisterVMNativeFunc_2("Object", "SubtractSubtract_PreByte", &NObject::SubtractSubtract_PreByte, 138);
	RegisterVMNativeFunc_2("Object", "SubtractSubtract_PreInt", &NObject::SubtractSubtract_PreInt, 164);
	RegisterVMNativeFunc_3("Object", "Subtract_FloatFloat", &NObject::Subtract_FloatFloat, 175);
	RegisterVMNativeFunc_3("Object", "Subtract_IntInt", &NObject::Subtract_IntInt, 147);
	RegisterVMNativeFunc_2("Object", "Subtract_PreFloat", &NObject::Subtract_PreFloat, 169);
	RegisterVMNativeFunc_2("Object", "Subtract_PreInt", &NObject::Subtract_PreInt, 143);
	RegisterVMNativeFunc_2("Object", "Subtract_PreVector", &NObject::Subtract_PreVector, 211);
	RegisterVMNativeFunc_3("Object", "Subtract_RotatorRotator", &NObject::Subtract_RotatorRotator, 317);
	RegisterVMNativeFunc_3("Object", "Subtract_VectorVector", &NObject::Subtract_VectorVector, 216);
	RegisterVMNativeFunc_2("Object", "Tan", &NObject::Tan, 189);
	RegisterVMNativeFunc_1("Object", "VRand", &NObject::VRand, 252);
	RegisterVMNativeFunc_2("Object", "VSize", &NObject::VSize, 225);
	RegisterVMNativeFunc_1("Object", "Warn", &NObject::Warn, 232);
	RegisterVMNativeFunc_3("Object", "XorXor_BoolBool", &NObject::XorXor_BoolBool, 131);
	RegisterVMNativeFunc_3("Object", "Xor_IntInt", &NObject::Xor_IntInt, 157);
}

void NObject::Abs(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Abs not implemented");
}

void NObject::AddAdd_Byte(uint8_t& A, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.AddAdd_Byte not implemented");
}

void NObject::AddAdd_Int(int& A, int& ReturnValue)
{
	throw std::runtime_error("Object.AddAdd_Int not implemented");
}

void NObject::AddAdd_PreByte(uint8_t& A, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.AddAdd_PreByte not implemented");
}

void NObject::AddAdd_PreInt(int& A, int& ReturnValue)
{
	throw std::runtime_error("Object.AddAdd_PreInt not implemented");
}

void NObject::AddEqual_ByteByte(uint8_t& A, uint8_t B, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.AddEqual_ByteByte not implemented");
}

void NObject::AddEqual_FloatFloat(float& A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.AddEqual_FloatFloat not implemented");
}

void NObject::AddEqual_IntInt(int& A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.AddEqual_IntInt not implemented");
}

void NObject::AddEqual_RotatorRotator(Rotator& A, const Rotator& B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.AddEqual_RotatorRotator not implemented");
}

void NObject::AddEqual_VectorVector(vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.AddEqual_VectorVector not implemented");
}

void NObject::Add_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Add_FloatFloat not implemented");
}

void NObject::Add_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Add_IntInt not implemented");
}

void NObject::Add_RotatorRotator(const Rotator& A, const Rotator& B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Add_RotatorRotator not implemented");
}

void NObject::Add_VectorVector(const vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Add_VectorVector not implemented");
}

void NObject::AndAnd_BoolBool(bool A, bool* B, bool& ReturnValue)
{
	throw std::runtime_error("Object.AndAnd_BoolBool not implemented");
}

void NObject::And_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.And_IntInt not implemented");
}

void NObject::Asc(const std::string& S, int& ReturnValue)
{
	throw std::runtime_error("Object.Asc not implemented");
}

void NObject::At_StrStr(const std::string& A, const std::string& B, std::string& ReturnValue)
{
	throw std::runtime_error("Object.At_StrStr not implemented");
}

void NObject::Atan(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Atan not implemented");
}

void NObject::Caps(const std::string& S, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Caps not implemented");
}

void NObject::Chr(int i, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Chr not implemented");
}

void NObject::Clamp(int V, int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Clamp not implemented");
}

void NObject::ClassIsChildOf(UObject* TestClass, UObject* ParentClass, bool& ReturnValue)
{
	throw std::runtime_error("Object.ClassIsChildOf not implemented");
}

void NObject::ComplementEqual_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.ComplementEqual_FloatFloat not implemented");
}

void NObject::ComplementEqual_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.ComplementEqual_StrStr not implemented");
}

void NObject::Complement_PreInt(int A, int& ReturnValue)
{
	throw std::runtime_error("Object.Complement_PreInt not implemented");
}

void NObject::Concat_StrStr(const std::string& A, const std::string& B, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Concat_StrStr not implemented");
}

void NObject::Cos(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Cos not implemented");
}

void NObject::Cross_VectorVector(const vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Cross_VectorVector not implemented");
}

void NObject::Disable(UObject* Self, const std::string& ProbeFunc)
{
	throw std::runtime_error("Object.Disable not implemented");
}

void NObject::DivideEqual_ByteByte(uint8_t& A, uint8_t B, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.DivideEqual_ByteByte not implemented");
}

void NObject::DivideEqual_FloatFloat(float& A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.DivideEqual_FloatFloat not implemented");
}

void NObject::DivideEqual_IntFloat(int& A, float B, int& ReturnValue)
{
	throw std::runtime_error("Object.DivideEqual_IntFloat not implemented");
}

void NObject::DivideEqual_RotatorFloat(Rotator& A, float B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.DivideEqual_RotatorFloat not implemented");
}

void NObject::DivideEqual_VectorFloat(vec3& A, float B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.DivideEqual_VectorFloat not implemented");
}

void NObject::Divide_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Divide_FloatFloat not implemented");
}

void NObject::Divide_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Divide_IntInt not implemented");
}

void NObject::Divide_RotatorFloat(const Rotator& A, float B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Divide_RotatorFloat not implemented");
}

void NObject::Divide_VectorFloat(const vec3& A, float B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Divide_VectorFloat not implemented");
}

void NObject::Dot_VectorVector(const vec3& A, const vec3& B, float& ReturnValue)
{
	throw std::runtime_error("Object.Dot_VectorVector not implemented");
}

void NObject::DynamicLoadObject(const std::string& ObjectName, UObject* ObjectClass, bool* MayFail, UObject*& ReturnValue)
{
	throw std::runtime_error("Object.DynamicLoadObject not implemented");
}

void NObject::Enable(UObject* Self, const std::string& ProbeFunc)
{
	throw std::runtime_error("Object.Enable not implemented");
}

void NObject::EqualEqual_BoolBool(bool A, bool B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_BoolBool not implemented");
}

void NObject::EqualEqual_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_FloatFloat not implemented");
}

void NObject::EqualEqual_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_IntInt not implemented");
}

void NObject::EqualEqual_NameName(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_NameName not implemented");
}

void NObject::EqualEqual_ObjectObject(UObject* A, UObject* B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_ObjectObject not implemented");
}

void NObject::EqualEqual_RotatorRotator(const Rotator& A, const Rotator& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_RotatorRotator not implemented");
}

void NObject::EqualEqual_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_StrStr not implemented");
}

void NObject::EqualEqual_VectorVector(const vec3& A, const vec3& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.EqualEqual_VectorVector not implemented");
}

void NObject::Exp(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Exp not implemented");
}

void NObject::FClamp(float V, float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.FClamp not implemented");
}

void NObject::FMax(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.FMax not implemented");
}

void NObject::FMin(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.FMin not implemented");
}

void NObject::FRand(float& ReturnValue)
{
	throw std::runtime_error("Object.FRand not implemented");
}

void NObject::GetAxes(const Rotator& A, vec3& X, vec3& Y, vec3& Z)
{
	throw std::runtime_error("Object.GetAxes not implemented");
}

void NObject::GetEnum(UObject* E, int i, std::string& ReturnValue)
{
	throw std::runtime_error("Object.GetEnum not implemented");
}

void NObject::GetPropertyText(UObject* Self, const std::string& PropName, std::string& ReturnValue)
{
	throw std::runtime_error("Object.GetPropertyText not implemented");
}

void NObject::GetStateName(UObject* Self, std::string& ReturnValue)
{
	throw std::runtime_error("Object.GetStateName not implemented");
}

void NObject::GetUnAxes(const Rotator& A, vec3& X, vec3& Y, vec3& Z)
{
	throw std::runtime_error("Object.GetUnAxes not implemented");
}

void NObject::GotoState(UObject* Self, std::string* NewState, std::string* Label)
{
	throw std::runtime_error("Object.GotoState not implemented");
}

void NObject::GreaterEqual_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.GreaterEqual_FloatFloat not implemented");
}

void NObject::GreaterEqual_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.GreaterEqual_IntInt not implemented");
}

void NObject::GreaterEqual_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.GreaterEqual_StrStr not implemented");
}

void NObject::GreaterGreaterGreater_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.GreaterGreaterGreater_IntInt not implemented");
}

void NObject::GreaterGreater_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.GreaterGreater_IntInt not implemented");
}

void NObject::GreaterGreater_VectorRotator(const vec3& A, const Rotator& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.GreaterGreater_VectorRotator not implemented");
}

void NObject::Greater_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Greater_FloatFloat not implemented");
}

void NObject::Greater_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Greater_IntInt not implemented");
}

void NObject::Greater_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Greater_StrStr not implemented");
}

void NObject::InStr(const std::string& S, const std::string& t, int& ReturnValue)
{
	throw std::runtime_error("Object.InStr not implemented");
}

void NObject::Invert(vec3& X, vec3& Y, vec3& Z)
{
	throw std::runtime_error("Object.Invert not implemented");
}

void NObject::IsA(UObject* Self, const std::string& ClassName, bool& ReturnValue)
{
	throw std::runtime_error("Object.IsA not implemented");
}

void NObject::IsInState(UObject* Self, const std::string& TestState, bool& ReturnValue)
{
	throw std::runtime_error("Object.IsInState not implemented");
}

void NObject::Left(const std::string& S, int i, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Left not implemented");
}

void NObject::Len(const std::string& S, int& ReturnValue)
{
	throw std::runtime_error("Object.Len not implemented");
}

void NObject::Lerp(float Alpha, float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Lerp not implemented");
}

void NObject::LessEqual_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.LessEqual_FloatFloat not implemented");
}

void NObject::LessEqual_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.LessEqual_IntInt not implemented");
}

void NObject::LessEqual_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.LessEqual_StrStr not implemented");
}

void NObject::LessLess_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.LessLess_IntInt not implemented");
}

void NObject::LessLess_VectorRotator(const vec3& A, const Rotator& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.LessLess_VectorRotator not implemented");
}

void NObject::Less_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Less_FloatFloat not implemented");
}

void NObject::Less_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Less_IntInt not implemented");
}

void NObject::Less_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.Less_StrStr not implemented");
}

void NObject::Localize(const std::string& SectionName, const std::string& KeyName, const std::string& PackageName, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Localize not implemented");
}

void NObject::Log(const std::string& S, std::string* Tag)
{
	throw std::runtime_error("Object.Log not implemented");
}

void NObject::Loge(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Loge not implemented");
}

void NObject::Max(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Max not implemented");
}

void NObject::Mid(const std::string& S, int i, int* j, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Mid not implemented");
}

void NObject::Min(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Min not implemented");
}

void NObject::MirrorVectorByNormal(const vec3& Vect, const vec3& Normal, vec3& ReturnValue)
{
	throw std::runtime_error("Object.MirrorVectorByNormal not implemented");
}

void NObject::MultiplyEqual_ByteByte(uint8_t& A, uint8_t B, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_ByteByte not implemented");
}

void NObject::MultiplyEqual_FloatFloat(float& A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_FloatFloat not implemented");
}

void NObject::MultiplyEqual_IntFloat(int& A, float B, int& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_IntFloat not implemented");
}

void NObject::MultiplyEqual_RotatorFloat(Rotator& A, float B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_RotatorFloat not implemented");
}

void NObject::MultiplyEqual_VectorFloat(vec3& A, float B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_VectorFloat not implemented");
}

void NObject::MultiplyEqual_VectorVector(vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyEqual_VectorVector not implemented");
}

void NObject::MultiplyMultiply_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.MultiplyMultiply_FloatFloat not implemented");
}

void NObject::Multiply_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_FloatFloat not implemented");
}

void NObject::Multiply_FloatRotator(float A, const Rotator& B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_FloatRotator not implemented");
}

void NObject::Multiply_FloatVector(float A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_FloatVector not implemented");
}

void NObject::Multiply_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_IntInt not implemented");
}

void NObject::Multiply_RotatorFloat(const Rotator& A, float B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_RotatorFloat not implemented");
}

void NObject::Multiply_VectorFloat(const vec3& A, float B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_VectorFloat not implemented");
}

void NObject::Multiply_VectorVector(const vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Multiply_VectorVector not implemented");
}

void NObject::Normal(const vec3& A, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Normal not implemented");
}

void NObject::Normalize(const Rotator& Rot, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Normalize not implemented");
}

void NObject::NotEqual_BoolBool(bool A, bool B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_BoolBool not implemented");
}

void NObject::NotEqual_FloatFloat(float A, float B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_FloatFloat not implemented");
}

void NObject::NotEqual_IntInt(int A, int B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_IntInt not implemented");
}

void NObject::NotEqual_NameName(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_NameName not implemented");
}

void NObject::NotEqual_ObjectObject(UObject* A, UObject* B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_ObjectObject not implemented");
}

void NObject::NotEqual_RotatorRotator(const Rotator& A, const Rotator& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_RotatorRotator not implemented");
}

void NObject::NotEqual_StrStr(const std::string& A, const std::string& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_StrStr not implemented");
}

void NObject::NotEqual_VectorVector(const vec3& A, const vec3& B, bool& ReturnValue)
{
	throw std::runtime_error("Object.NotEqual_VectorVector not implemented");
}

void NObject::Not_PreBool(bool A, bool& ReturnValue)
{
	throw std::runtime_error("Object.Not_PreBool not implemented");
}

void NObject::OrOr_BoolBool(bool A, bool* B, bool& ReturnValue)
{
	throw std::runtime_error("Object.OrOr_BoolBool not implemented");
}

void NObject::Or_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Or_IntInt not implemented");
}

void NObject::OrthoRotation(const vec3& X, const vec3& Y, const vec3& Z, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.OrthoRotation not implemented");
}

void NObject::Percent_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Percent_FloatFloat not implemented");
}

void NObject::Rand(int Max, int& ReturnValue)
{
	throw std::runtime_error("Object.Rand not implemented");
}

void NObject::RandRange(UObject* Self, float Min, float Max, float& ReturnValue)
{
	throw std::runtime_error("Object.RandRange not implemented");
}

void NObject::ResetConfig()
{
	throw std::runtime_error("Object.ResetConfig not implemented");
}

void NObject::Right(const std::string& S, int i, std::string& ReturnValue)
{
	throw std::runtime_error("Object.Right not implemented");
}

void NObject::RotRand(bool* bRoll, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.RotRand not implemented");
}

void NObject::SaveConfig(UObject* Self)
{
	throw std::runtime_error("Object.SaveConfig not implemented");
}

void NObject::SetPropertyText(UObject* Self, const std::string& PropName, const std::string& PropValue)
{
	throw std::runtime_error("Object.SetPropertyText not implemented");
}

void NObject::Sin(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Sin not implemented");
}

void NObject::Smerp(float Alpha, float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Smerp not implemented");
}

void NObject::Sqrt(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Sqrt not implemented");
}

void NObject::Square(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Square not implemented");
}

void NObject::StaticSaveConfig()
{
	throw std::runtime_error("Object.StaticSaveConfig not implemented");
}

void NObject::SubtractEqual_ByteByte(uint8_t& A, uint8_t B, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.SubtractEqual_ByteByte not implemented");
}

void NObject::SubtractEqual_FloatFloat(float& A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.SubtractEqual_FloatFloat not implemented");
}

void NObject::SubtractEqual_IntInt(int& A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.SubtractEqual_IntInt not implemented");
}

void NObject::SubtractEqual_RotatorRotator(Rotator& A, const Rotator& B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.SubtractEqual_RotatorRotator not implemented");
}

void NObject::SubtractEqual_VectorVector(vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.SubtractEqual_VectorVector not implemented");
}

void NObject::SubtractSubtract_Byte(uint8_t& A, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.SubtractSubtract_Byte not implemented");
}

void NObject::SubtractSubtract_Int(int& A, int& ReturnValue)
{
	throw std::runtime_error("Object.SubtractSubtract_Int not implemented");
}

void NObject::SubtractSubtract_PreByte(uint8_t& A, uint8_t& ReturnValue)
{
	throw std::runtime_error("Object.SubtractSubtract_PreByte not implemented");
}

void NObject::SubtractSubtract_PreInt(int& A, int& ReturnValue)
{
	throw std::runtime_error("Object.SubtractSubtract_PreInt not implemented");
}

void NObject::Subtract_FloatFloat(float A, float B, float& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_FloatFloat not implemented");
}

void NObject::Subtract_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_IntInt not implemented");
}

void NObject::Subtract_PreFloat(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_PreFloat not implemented");
}

void NObject::Subtract_PreInt(int A, int& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_PreInt not implemented");
}

void NObject::Subtract_PreVector(const vec3& A, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_PreVector not implemented");
}

void NObject::Subtract_RotatorRotator(const Rotator& A, const Rotator& B, Rotator& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_RotatorRotator not implemented");
}

void NObject::Subtract_VectorVector(const vec3& A, const vec3& B, vec3& ReturnValue)
{
	throw std::runtime_error("Object.Subtract_VectorVector not implemented");
}

void NObject::Tan(float A, float& ReturnValue)
{
	throw std::runtime_error("Object.Tan not implemented");
}

void NObject::VRand(vec3& ReturnValue)
{
	throw std::runtime_error("Object.VRand not implemented");
}

void NObject::VSize(const vec3& A, float& ReturnValue)
{
	throw std::runtime_error("Object.VSize not implemented");
}

void NObject::Warn(const std::string& S)
{
	throw std::runtime_error("Object.Warn not implemented");
}

void NObject::XorXor_BoolBool(bool A, bool B, bool& ReturnValue)
{
	throw std::runtime_error("Object.XorXor_BoolBool not implemented");
}

void NObject::Xor_IntInt(int A, int B, int& ReturnValue)
{
	throw std::runtime_error("Object.Xor_IntInt not implemented");
}
