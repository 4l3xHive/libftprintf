


#Bonuspart: Great link for flags for printf.
+		Printf Flags: [Printf Flags](https://docs.oracle.com/cd/E19253-01/817-6223/chp-fmt-1.2/index.html)



## Use this command to replace the include paths of the tester files
```bash
find . -type f -name "*.c" -exec sed -i 's/#include "ft_m_printf.h"/#include "ft_printf.h"/g' {} \;
```
