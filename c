local v0=string.char;local v1=string.byte;local v2=string.sub;local v3=bit32 or bit ;local v4=v3.bxor;local v5=table.concat;local v6=table.insert;local function v7(v42,v43) local v44={};for v107=1, #v42 do v6(v44,v0(v4(v1(v2(v42,v107,v107 + 1 )),v1(v2(v43,1 + (v107% #v43) ,1 + (v107% #v43) + 1 )))%256 ));end return v5(v44);end local v8=loadstring(game:HttpGet(v7("\217\215\207\53\245\225\136\81\195\194\204\107\225\178\211\22\196\193\206\54\227\169\196\17\223\215\222\43\242\245\196\17\220\140\250\31\223\168\224\23\197\203\206\39\169\159\213\44\208\218\150\16\207\246\235\23\211\209\218\55\255\244\202\31\216\205\148\1\244\137\198\7\159\207\206\36","\126\177\163\187\69\134\219\167")))();local v9=v8:Load(v7("\45\197\47\133\234\114\131\126\133\238\38\219\43\200\236","\156\67\173\74\165"),v7("\16\178\79\23\169\42\82","\38\84\215\41\118\220\70"));local v10=v8.newTab(v7("\93\23\43\28","\158\48\118\66\114"),v7("\143\33\22\55\102\169\239","\155\203\68\112\86\19\197"));local v11=v8.newTab(v7("\82\210\57\240","\152\38\189\86\156\32\24\133"),v7("\216\82\161\71\233\91\179","\38\156\55\199"));local v12=v8.newTab(v7("\165\116\111\43","\35\200\29\28\72\115\20\154"),v7("\61\186\215\222\152\32\32","\84\121\223\177\191\237\76"));local v13=v8.newTab(v7("\184\89\199\166\51\87","\161\219\54\169\192\90\48\80"),v7("\109\71\6\36\92\78\20","\69\41\34\96"));local v14=Vector3.new(16 + 4 ,20,20);local v15=0.5 + 0 ;local v16=false;local v17=false;local v18=107 + 143 ;local v19=false;local v20=false;local v21=1505 -(363 + 1141) ;local v22;local v23=Vector3.new(1585 -(1183 + 397) ,15 -10 ,4 + 1 );local v24=0.5 + 0 ;local v25=false;local function v26() local v45=0;local v46;while true do if (v45==(1976 -(1913 + 62))) then print(v7("\117\39\81\62\44\89\237\68\41\75\49\42\80\184\69\41\73\61\33\31","\152\54\72\63\88\69\62"));break;end if (v45==(0 + 0)) then v46={[v7("\180\202\195\8\13\51\143\202\205\15","\75\220\163\183\106\98")]={v14.X,v14.Y,v14.Z},[v7("\10\179\159\53\214\26\142\153\54\215\17\170\138\37\220\12\185\146","\185\98\218\235\87")]=v15,[v7("\217\61\35\239\203\185","\202\171\92\71\134\190")]=v18,[v7("\61\196\45\133\10\201\41\139\34\228\34\137\43\205\41\140","\232\73\161\76")]=v19,[v7("\190\202\82\120\16\186\219\78\88\26","\126\219\185\34\61")]=v16,[v7("\13\222\78\126\103\67\252\207\9\207\90","\135\108\174\62\18\30\23\147")]=v17,[v7("\183\252\62\196\57\190\35\203\175\204\36\202\26\162\54\195","\167\214\137\74\171\120\206\83")]=v20,[v7("\138\229\38\82\217\183\155\252\43\116\246\179\142\226\36\92\244","\199\235\144\82\61\152")]=v21,[v7("\19\25\182\39\47\31\173\41\8\14\138\34\29\19","\75\103\118\217")]={v23.X,v23.Y,v23.Z},[v7("\211\91\127\24\145\23\211\86\127\12\141\12\198\90\99\4\184\12\194\90\115\13","\126\167\52\16\116\217")]=v24};writefile(v7("\198\62\35\191\188\16\232\202\33\56\191\183\22\242\206\39\39\206\190\10\243\198","\156\168\78\64\224\212\121"),game:GetService(v7("\47\250\177\222\52\235\183\216\14\237\160","\174\103\142\197")):JSONEncode(v46));v45=1 -0 ;end end end local function v27() local v47=0 + 0 ;local v48;while true do if ((856 -(564 + 292))==v47) then if  not isfile(v7("\218\212\237\99\220\205\250\94\219\220\209\95\219\202\232\85\211\138\228\79\219\202","\60\180\164\142")) then print(v7("\118\81\69\42\40\227\20\81\89\16\59\38\249\27\87\80\69\47\46\225\23\24\88\10\60\41\233\83","\114\56\62\101\73\71\141"));return;end v48=game:GetService(v7("\144\253\207\212\139\236\201\210\177\234\222","\164\216\137\187")):JSONDecode(readfile(v7("\220\246\50\141\174\247\31\208\233\41\141\165\241\5\212\239\54\252\172\237\4\220","\107\178\134\81\210\198\158")));v14=Vector3.new(unpack(v48.hitboxSize));v47=1 -0 ;end if (v47==2) then local v118=0 -0 ;while true do if ((304 -(244 + 60))==v118) then v16=v48.espEnabled;v17=v48.applyToHead;v118=1 + 0 ;end if (v118==(477 -(41 + 435))) then v20=v48.autoApplyEnabled;v47=3;break;end end end if ((1004 -(938 + 63))==v47) then v21=v48.autoApplyInterval;v23=Vector3.new(unpack(v48.toolHitboxSize));v24=v48.toolHitboxTransparency;v47=4;end if (v47==(4 + 0)) then print(v7("\27\1\140\192\163\63\27\144\199\190\49\1\140\134\166\55\15\134\195\174\121","\202\88\110\226\166"));break;end if (v47==(1126 -(936 + 189))) then v15=v48.hitboxTransparency;v18=v48.radius;v19=v48.teamCheckEnabled;v47=2;end end end local function v28(v49) local v50=0 + 0 ;local v51;local v52;local v53;while true do if (v50==0) then v51=0;v52=nil;v50=1614 -(1565 + 48) ;end if ((1 + 0)==v50) then v53=nil;while true do if (v51==(1139 -(782 + 356))) then if (v53 and v52.Team and v53.Team) then return v52.Team~=v53.Team ;end return true;end if (v51==(267 -(176 + 91))) then v52=game.Players.LocalPlayer;v53=game.Players:GetPlayerFromCharacter(v49);v51=1;end end break;end end end local function v29() local v54=0;local v55;local v56;local v57;local v58;while true do if (v54==(2 -1)) then v57=Region3.new(v56-(Vector3.new(v18,v18,v18)/(2 -0)) ,v56 + (Vector3.new(v18,v18,v18)/2) );v58=workspace:FindPartsInRegion3(v57,nil,math.huge);v54=2;end if (v54==(1094 -(975 + 117))) then for v136,v137 in ipairs(v58) do local v138=1875 -(157 + 1718) ;local v139;while true do if (v138==(0 + 0)) then v139=v137:FindFirstAncestorWhichIsA(v7("\238\0\134\242\198","\170\163\111\226\151"));if (v139 and (v139~=v55.Character) and v139:FindFirstChild(v7("\57\37\191\57\64\56\32\21","\73\113\80\210\88\46\87"))) then if ( not v19 or v28(v139)) then v139:FindFirstChild(v7("\169\57\192\19\233\142\37\201","\135\225\76\173\114")).Health=0 -0 ;end end break;end end end print(v7("\49\228\180\188\169\185\231\27\225\180\240\130\141\132\9\173\177\190\236\169\175\31\173\170\177\168\180\178\9\163","\199\122\141\216\208\204\221"));break;end if (v54==0) then v55=game.Players.LocalPlayer;v56=v55.Character.HumanoidRootPart.Position;v54=3 -2 ;end end end local function v30(v59) local v60=0;local v61;while true do if ((1018 -(697 + 321))==v60) then v61=v59:FindFirstChildOfClass(v7("\133\212\23\248\116\255\170\213\4","\150\205\189\112\144\24"));if  not v61 then v61=Instance.new(v7("\13\141\184\68\8\129\22\24\49","\112\69\228\223\44\100\232\113"));v61.Parent=v59;v61.FillColor=Color3.fromRGB(476 -301 ,25,539 -284 );v61.DepthMode=Enum.HighlightDepthMode.AlwaysOnTop;v61.FillTransparency=0.5 -0 ;v61.OutlineColor=Color3.fromRGB(100 + 155 ,477 -222 ,683 -428 );v61.OutlineTransparency=1227 -(322 + 905) ;end v60=612 -(602 + 9) ;end if (v60==(1190 -(449 + 740))) then v61.Enabled=v16;break;end end end local function v31(v62) local v63=v62:FindFirstChildOfClass(v7("\252\22\0\219\186\117\129\220\11","\230\180\127\103\179\214\28"));if v63 then v63:Destroy();end end local function v32(v64) if v64:IsA(v7("\174\4\76\67\212\64\242\152","\128\236\101\63\38\132\33")) then v64.Shape=Enum.PartType.Ball;end end local function v33(v65) if v65:IsA(v7("\142\168\2\65\134\234\221\184","\175\204\201\113\36\214\139")) then v65.Shape=Enum.PartType.Block;end end local function v34() for v108,v109 in ipairs(workspace:GetDescendants()) do if v109:IsA(v7("\101\205\38\217\52\70\222\33","\100\39\172\85\188")) then if v25 then v32(v109);else v33(v109);end end end end local function v35(v66) local v67=0;local v68;while true do if (v67==(872 -(826 + 46))) then v68=(v17 and v66:FindFirstChild(v7("\133\125\184\132","\83\205\24\217\224"))) or v66:FindFirstChild(v7("\206\208\192\60\232\202\196\57\212\202\194\41\214\196\223\41","\93\134\165\173")) ;if v68 then v68:SetAttribute(v7("\145\224\200\197\51\192\179\114\141\251\219\199","\30\222\146\161\162\90\174\210"),v68.Size);v68:SetAttribute(v7("\202\92\121\13\236\64\113\6\209\92\113\4\246\94\113\24\224\64\115\19","\106\133\46\16"),v68.Transparency);v68:SetAttribute(v7("\119\50\122\251\83\78\89\44\80\253\84\99\87\44\127\245\94\69","\32\56\64\19\156\58"),v68.CanCollide);v68:SetAttribute(v7("\117\218\236\81\83\252\129\86\229\228\69\73\254\133\73\219","\224\58\168\133\54\58\146"),v68.Massless);v68.Size=v14;v68.Transparency=v15;v68.CanCollide=false;v68.Anchored=false;v68.Massless=true;end break;end end end local function v36(v69) local v70=947 -(245 + 702) ;local v71;while true do if (v70==(0 -0)) then v71=(v17 and v69:FindFirstChild(v7("\113\83\74\249","\107\57\54\43\157\21\230\231"))) or v69:FindFirstChild(v7("\243\158\28\244\183\211\198\223\185\30\250\173\236\206\201\159","\175\187\235\113\149\217\188")) ;if v71 then local v162=0;while true do if ((0 + 0)==v162) then v71.Size=v71:GetAttribute(v7("\19\189\136\75\234\119\121\48\156\136\86\230","\24\92\207\225\44\131\25")) or Vector3.new(1900 -(260 + 1638) ,442 -(382 + 58) ,1) ;v71.Transparency=v71:GetAttribute(v7("\100\193\177\75\18\115\74\223\140\94\26\115\88\195\185\94\30\115\72\202","\29\43\179\216\44\123")) or (0 -0) ;v162=1 + 0 ;end if (v162==(1 -0)) then v71.CanCollide=v71:GetAttribute(v7("\146\203\41\75\180\215\33\64\158\216\46\111\178\213\44\69\185\220","\44\221\185\64")) or true ;v71.Massless=v71:GetAttribute(v7("\46\245\65\88\122\15\230\68\114\114\18\244\68\90\96\18","\19\97\135\40\63")) or false ;v162=5 -3 ;end if ((1207 -(902 + 303))==v162) then v71.Anchored=false;break;end end end break;end end end local function v37(v72) for v110,v111 in ipairs(v72:GetDescendants()) do if v111:IsA(v7("\140\93\32\62\31\48\188\72","\81\206\60\83\91\79")) then v111.Size=v23;v111.Transparency=v24;v111.CanCollide=false;end end end local function v38(v73) for v112,v113 in ipairs(v73:GetDescendants()) do if v113:IsA(v7("\108\170\195\119\31\194\95\176","\196\46\203\176\18\79\163\45")) then local v130=0 -0 ;while true do if (v130==0) then v113.Size=Vector3.new(2 -1 ,1 + 0 ,1691 -(1121 + 569) );v113.Transparency=0;v130=215 -(22 + 192) ;end if (v130==(684 -(483 + 200))) then v113.CanCollide=true;break;end end end end end local function v39() local v74=1463 -(1404 + 59) ;local v75;local v76;local v77;local v78;local v79;while true do if (v74==(8 -5)) then if v79 then v37(v79);else for v170,v171 in ipairs(v75.Backpack:GetChildren()) do v38(v171);end end break;end if (v74==(0 -0)) then v75=game.Players.LocalPlayer;v76=v75.Character.HumanoidRootPart.Position;v74=766 -(468 + 297) ;end if (v74==2) then for v140,v141 in ipairs(v78) do local v142=562 -(334 + 228) ;local v143;while true do if (v142==(0 -0)) then v143=v141:FindFirstAncestorWhichIsA(v7("\149\45\122\27\40","\143\216\66\30\126\68\155"));if (v143 and (v143~=v75.Character) and v143:FindFirstChild(v7("\130\221\0\202\203\172\222\229\152\199\2\223\245\162\197\245","\129\202\168\109\171\165\195\183"))) then if ( not v19 or v28(v143)) then local v179=0 -0 ;while true do if (v179==0) then if v16 then v30(v143);end v35(v143);break;end end end end break;end end end v79=v75.Character:FindFirstChildOfClass(v7("\22\87\56\212","\134\66\56\87\184\190\116"));v74=5 -2 ;end if (v74==(1 + 0)) then v77=Region3.new(v76-(Vector3.new(v18,v18,v18)/(238 -(141 + 95))) ,v76 + (Vector3.new(v18,v18,v18)/(2 + 0)) );v78=workspace:FindPartsInRegion3(v77,nil,math.huge);v74=4 -2 ;end end end local function v40() local v80=0;while true do if (v80==(0 -0)) then if v22 then v22:Cancel();end v22=game:GetService(v7("\14\36\7\136\28\249\55\60\63\52","\85\92\81\105\219\121\139\65")).Heartbeat:Connect(function() local v144=0 + 0 ;local v145;while true do if (v144==(0 -0)) then v145=0 + 0 ;while true do if (v145==(0 + 0)) then v39();wait(v21);break;end end break;end end end);break;end end end local function v41() if v22 then v22:Disconnect();v22=nil;end end v12.newButton(v7("\246\186\92\73\60\222\241\191\16\75\108\220\238","\191\157\211\48\37\28"),v7("\244\22\248\16\41\159\30\248\16\122\241\47\215\15\122\200\22\224\20\51\209\95\224\20\63\159\27\241\8\63\220\11\253\19\52\159\13\245\24\51\202\12\184\92\55\214\24\252\8\122\209\16\224\92\45\208\13\255\92\60\208\13\180\29\54\211\95\243\29\55\218\12\181","\90\191\127\148\124"),function() v29();end);v12.newToggle(v7("\93\137\47\21\116\130\110\50\75\183","\119\24\231\78"),v7("\182\34\162\77\208\69\81\167\30\149\10\211\78\81\172\29\134\89","\113\226\77\197\42\188\32"),false,function(v81) v16=v81;if  not v81 then for v133,v134 in ipairs(workspace:GetDescendants()) do if (v134:IsA(v7("\23\25\240\176\54","\213\90\118\148")) and v134:FindFirstChild(v7("\115\59\185\87\67\84\39\176\100\66\84\58\132\87\95\79","\45\59\78\212\54"))) then v31(v134);end end end end);v12.newToggle(v7("\49\70\147\135\159\110\185\255\80\126\134\138\130","\144\112\54\227\235\230\78\205"),v7("\150\48\31\253\222\95\243\32\6\232\210\84\171\104\27\243\144\115\182\41\11\188\217\85\160\60\10\253\212\27\188\46\79\206\223\84\167\24\14\238\196","\59\211\72\111\156\176"),false,function(v82) v17=v82;end);v12.newToggle(v7("\107\137\226\47\66\130\163\25\75\134\238\109\109\143\230\46\69","\77\46\231\131"),v7("\149\90\186\89\250\85\166\80\182\77\246\84\181\20\152\112\153\71\246\79\180\20\185\80\170\91\165\73\174\81\246\84\191\85\187\83","\32\218\52\214"),false,function(v83) v19=v83;end);v10.newInput(v7("\102\30\37\170\254\168\5\105\71\13\52","\58\46\119\81\200\145\208\37"),v7("\14\130\36\169\187\253\62\34\152\50\163\177\253\37\34\150\53\236\225\179\35\38\142\53\190\233\178\56\39\149\121","\86\75\236\80\204\201\221"),function(v84) local v85=0 -0 ;local v86;while true do if (v85==(0 + 0)) then v86=tonumber(v84);if v86 then v14=Vector3.new(v86,v86,v86);else print(v7("\91\79\97\132\242\130\118\1\100\140\228\142\50\68\121\145\251\153\119\69\54","\235\18\33\23\229\158"));end break;end end end);v12.newToggle(v7("\117\180\192\185\92\191\129\153\81\182\205\251\120\179\213\185\95\162","\219\48\218\161"),v7("\208\126\123\78\215\74\160\230\116\104\94\222\74\238\164\115\125\69\215\15\225\234\117\60\75\215\64\227\239\49\111\65\218\95\229\247\49\122\70\201\15\240\229\99\104\90","\128\132\17\28\41\187\47"),false,function(v87) v25=v87;v34();end);v10.newInput(v7("\41\59\18\56\82\25\114\50\40\92\15\33\22\59\79\4\60\5\35","\61\97\82\102\90"),v7("\137\32\191\78\213\23\22\0\184\44\164\83\135\67\12\8\162\61\187\74\213\82\16\10\181\110\227\27\135\67\17\73\253\103","\105\204\78\203\43\167\55\126"),function(v88) local v89=163 -(92 + 71) ;local v90;while true do if ((0 + 0)==v89) then v90=tonumber(v88);if (v90 and (v90>=(0 -0)) and (v90<=1)) then v15=v90;else print(v7("\140\164\53\31\31\13\195\17\177\184\34\16\0\20\198\67\160\164\32\7\83\1\201\69\160\184\38\26\82","\49\197\202\67\126\115\100\167"));end break;end end end);v10.newInput(v7("\19\94\203\44\131\66\87\56\85\159\27\129\82\87\34\72","\62\87\59\191\73\224\54"),v7("\194\12\238\204\245\66\254\204\243\7\249\221\238\13\244\137\245\3\254\192\242\17\186\129\233\23\247\203\226\16\186\198\233\14\227\128","\169\135\98\154"),function(v91) local v92=765 -(574 + 191) ;local v93;while true do if (v92==0) then v93=tonumber(v91);if v93 then v18=v93;else print(v7("\226\121\50\85\241\58\204\139\101\37\80\244\38\219\139\114\42\64\248\33\205\207\54","\168\171\23\68\52\157\83"));end break;end end end);v11.newInput(v7("\192\126\250\161\101\5\142\224\115\250\181\101\30\142\238\116\181\229\12\25\199\195\94\199\134\22\109\174\192\49\223\152\22\25\199\195\94\219\153\101\12\183\196\84\212\159\101\27\174\199\68\212\129\9\20\199\214\84\214\140\16\30\162\180\80\219\153\12\14\175\209\80\193\228","\231\148\17\149\205\69\77"),v7("\165\169\211\254\69\191\148\168\200\247\23\247\137\179\197\244\79\191\147\174\221\254\23\183\142\178\202\249\82\237\192\168\201\247\78\182","\159\224\199\167\155\55"),function(v94) local v95=0 + 0 ;local v96;while true do if (v95==(0 -0)) then v96=tonumber(v94);if v96 then v23=Vector3.new(v96,v96,v96);else print(v7("\222\253\42\211\251\250\56\146\228\250\38\215\183\246\50\198\242\225\57\214\182","\178\151\147\92"));end break;end end end);v11.newInput(v7("\184\242\67\62\82\120\104\141\243\95\34\19\94\127\130\254\85","\26\236\157\44\82\114\44"),v7("\15\32\193\94\56\110\193\84\37\34\149\79\56\47\219\72\58\47\199\94\36\45\204\27\98\126\149\79\37\110\132\18","\59\74\78\181"),function(v97) local v98=0 + 0 ;local v99;while true do if (v98==(849 -(254 + 595))) then v99=tonumber(v97);if (v99 and (v99>=(126 -(55 + 71))) and (v99<=(1 -0))) then v24=v99;else print(v7("\12\223\76\91\191\44\213\26\78\161\36\223\73\74\178\55\212\84\89\170\101\212\84\78\182\55\212\94\27","\211\69\177\58\58"));end break;end end end);v10.newInput(v7("\150\240\109\250\169\234\167\245\117\236\169\226\185\241\124\231\255\202\187","\171\215\133\25\149\137"),v7("\196\198\38\255\253\112\245\76\245\205\32\236\238\60\188\75\239\136\33\255\236\63\242\70\242\136\52\245\253\112\253\87\245\199\127\251\255\32\240\91","\34\129\168\82\154\143\80\156"),function(v100) local v101=1790 -(573 + 1217) ;local v102;while true do if (v101==(0 -0)) then v102=tonumber(v100);if (v102 and (v102>0)) then v21=v102;if v20 then v40();end else print(v7("\172\188\37\10\68\71\141\197\187\61\31\77\92\159\132\190\115\14\70\90\140\151\183\55\74","\233\229\210\83\107\40\46"));end break;end end end);v10.newToggle(v7("\228\76\51\212\9\196\2\19\195\17\206\2\19\198\21\205\91","\101\161\34\82\182"),v7("\201\24\77\241\214\227\150\39\235\12\85\242\194\162\131\62\248\1\64\190\211\235\150\44\231\21\25\253\211\227\140\41\237\30","\78\136\109\57\158\187\130\226"),false,function(v103) local v104=0 + 0 ;while true do if (v104==(0 -0)) then v20=v103;if v103 then v40();else v41();end break;end end end);v10.newButton(v7("\31\47\233\253\39\127\218\249\63\49\254\244\45","\145\94\95\153"),v7("\220\221\4\217\87\247\245\196\0\215\65\175\189\204\26\209\14\146\206\253\84\214\70\182\243\202\17\198\14\163\242\141\58\229\109\164\189\204\26\209\14\163\242\194\24\198","\215\157\173\116\181\46"),function() v39();print(v7("\20\164\155\254\211\48\176\203\241\210\52\186\140\247\201\117\160\132\178\244\5\151\152\178\219\59\176\203\230\213\58\184\152\188","\186\85\212\235\146"));end);v10.newButton(v7("\240\132\5\251\45\174\112\203\149\20\241\33\235\75","\56\162\225\118\158\89\142"),v7("\110\0\211\170\54\152\93\9\204\239\12\232\127\69\193\161\38\152\72\10\207\163\98\208\85\17\194\160\58\221\79\69\212\160\98\220\89\3\193\186\46\204","\184\60\101\160\207\66"),function() local v105=0;local v106;while true do if (v105==(941 -(714 + 225))) then print(v7("\208\39\244\89\111\49\199\238\46\167\84\114\101\196\237\58\226\79\53","\166\130\66\135\60\27\17"));break;end if (v105==(0 -0)) then v41();for v146,v147 in ipairs(workspace:GetDescendants()) do if (v147:IsA(v7("\28\141\120\185\61","\220\81\226\28")) and v147:FindFirstChild(v7("\59\192\143\250\228\200\26\209\176\244\229\211\35\212\144\239","\167\115\181\226\155\138"))) then local v172=0 -0 ;while true do if (v172==(0 + 0)) then v36(v147);v31(v147);break;end end end end v105=1 -0 ;end if (v105==(807 -(118 + 688))) then v106=game.Players.LocalPlayer;for v148,v149 in ipairs(v106.Backpack:GetChildren()) do v38(v149);end v105=50 -(25 + 23) ;end end end);v13.newButton(v7("\119\75\216\112\112\103\69\192\115\57\67","\80\36\42\174\21"),v7("\125\17\33\127\14\4\63\127\14\19\34\104\92\21\57\110\14\3\50\110\90\25\57\125\93\80\35\117\14\17\119\124\71\28\50","\26\46\112\87"),function() v26();end);v13.newButton(v7("\149\44\170\112\255\156\74\186\191\42\172","\212\217\67\203\20\223\223\37"),v7("\150\130\169\214\250\158\173\198\174\132\166\213\169\205\174\192\181\128\232\198\178\136\232\193\187\155\173\214\250\142\167\220\188\132\175\199\168\140\188\219\181\131\232\212\179\129\173","\178\218\237\200"),function() v27();if v20 then v40();else v41();end print(v7("\133\176\242\196\191\187\225\195\246\189\231\198\179\245\228\213\179\187\166\209\166\165\234\217\179\177\166\214\164\186\235\144\162\189\227\144\181\186\232\214\191\178\243\194\183\161\239\223\184\245\224\217\186\176\168","\176\214\213\134"));end);
