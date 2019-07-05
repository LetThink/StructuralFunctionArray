# StructuralFunctionArray
 ##定义结构体指针函数数组：
      
            int Function1(int i)
            {
                  printf("\r\n%d -> Call Back Function1",i);
                  return 0;
            }
            
            int Function2(int i)
            {
                  printf("\r\n%d -> Call Back Function2",i);
                  return 0;
            }
            
      ###函数数组表对应相应的函数
            CmdFunArray[0] = Function1;
            CmdFunArray[1] = Function2;
            CmdFunArray[2] = Function3; 
            CmdFunArray[3] = CallFunc;
        
        
 ##函数的调用方式1:函数指针访问。
      
            if (funcCall[i].m_no == 0x01)
            {
              pfun[i](funcCall[i].m_no);
            }
          
          
  ##函数的调用方式2:函数字符串描述符，通常从某个xml格式的协议中得到某个节点的属性的字符串，然后调用对应的访问函数。
     
         if (strcmp(funcCall[i].Func[0].FucStr,"Function2")==0)
        {
          printf("\r\n %s",funcCall[i].Func[0].FucStr);
          pfun[i](funcCall[i].m_no);
        }
![img](https://github.com/LetThink/StructuralFunctionArray/blob/master/result.png)
