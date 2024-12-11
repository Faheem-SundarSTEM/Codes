from collections import deque

def ac3(csp):
    queue = deque([(xi, xj) for xi in csp['variables'] for xj in csp['neighbors'][xi]])
    # print(queue)
    vis = set(queue)
    while queue:
        (xi, xj) = queue.popleft()
        if revise(csp, xi, xj):
            if not csp['domains'][xi]:
                return False
            for xk in csp['neighbors'][xi]:
                if xk != xj:
                    if (xk, xi) not in vis:
                        queue.append((xk, xi))
                        vis.add((xk, xi))
    return True

def revise(csp, xi, xj):
    revised = False
    for x in set(csp['domains'][xi]):
        if not any(satisfies(csp, x, y, xi, xj) for y in csp['domains'][xj]):
            csp['domains'][xi].remove(x)
            revised = True
    return revised


def satisfies(csp, x, y, xi, xj):
    #print(xi, xj)
    if (xi, xj) in csp['constraints']:
        return csp['constraints'][(xi, xj)](x, y)
    return True

def backtrack(csp, assignment={}):
    if len(assignment) == len(csp['variables']):
        return assignment
   
    unassigned_vars = [v for v in csp['variables'] if v not in assignment]
    first = unassigned_vars[0]
    print('A')
    original_domains = {var: set(csp['domains'][var]) for var in csp['variables']}
    for value in csp['domains'][first]:
        local_assignment = assignment.copy()
        #print(local_assignment, first)
        local_assignment[first] = value
        #print(local_assignment)
        if consistent(csp, local_assignment):
            csp['domains'][first] = {value}
            if ac3(csp):
                result = backtrack(csp, local_assignment)
                if result:
                    return result
       
        for var in csp['variables']:
            csp['domains'][var] = original_domains[var]
   
    return None

def consistent(csp, assignment):
    for (var1, var2) in csp['constraints']:
        if var1 in assignment and var2 in assignment:
            if not csp['constraints'][(var1, var2)](assignment[var1], assignment[var2]):
                return False
    return True


csp = {
    'variables': ['WA', 'NT', 'Q', 'NSW', 'V', 'SA'],
    'domains': {
        'WA': {'Red', 'Green', 'Blue'},
        'NT': {'Red', 'Green', 'Blue'},
        'Q': {'Red', 'Green', 'Blue'},
        'NSW': {'Red', 'Green', 'Blue'},
        'V': {'Red', 'Green', 'Blue'},
        'SA': {'Red', 'Green', 'Blue'}
    },
    'neighbors': {
        'WA': ['NT', 'SA'],
        'NT': ['WA', 'Q', 'SA'],
        'Q': ['NT', 'NSW', 'SA'],
        'NSW': ['Q', 'V'],
        'V': ['NSW', 'SA'],
        'SA': ['WA', 'NT', 'Q', 'V']
    },
    'constraints': {
        ('WA', 'NT'): lambda wa, nt: wa != nt,
        ('NT', 'WA'): lambda nt, wa: nt != wa,
        ('WA', 'SA'): lambda wa, sa: wa != sa,
        ('SA', 'WA'): lambda sa, wa: sa != wa,
        ('NT', 'Q'): lambda nt, q: nt != q,
        ('Q', 'NT'): lambda q, nt: q != nt,
        ('NT', 'SA'): lambda nt, sa: nt != sa,
        ('SA', 'NT'): lambda sa, nt: sa != nt,
        ('Q', 'NSW'): lambda q, nsw: q != nsw,
        ('NSW', 'Q'): lambda nsw, q: nsw != q,
        ('Q', 'SA'): lambda q, sa: q != sa,
        ('SA', 'Q'): lambda sa, q: sa != q,
        ('NSW', 'V'): lambda nsw, v: nsw != v,
        ('V', 'NSW'): lambda v, nsw: v != nsw,
        ('V', 'SA'): lambda v, sa: v != sa,
        ('SA', 'V'): lambda sa, v: sa != v
    }
}


ac3(csp)
#print(csp['domains'])
solution = backtrack(csp)
print("Solution:", solution)
